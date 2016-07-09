# -*- coding: utf-8 -*-
import requests
import os
from getpass import getpass
from bs4 import BeautifulSoup

class user_Uri():
    def __init__(self,user,password):
        self.user = user
        self.password = password
        self.login_url = "https://www.urionlinejudge.com.br/judge/pt/login"
        self.home_url = "https://www.urionlinejudge.com.br/judge/pt"
        self.session = requests.Session()

    def login(self):
        page = self.session.get(self.login_url).text
        soup = BeautifulSoup(page, 'html5lib')

        csrfToken = soup.find(attrs={"name": "_csrfToken"})['value']
        tokenFields = soup.find(attrs = {'name': '_Token[fields]'})['value']

        response = self.session.post("https://www.urionlinejudge.com.br/judge/pt/login",data = {
            "email": self.user,
           "password": self.password,
           "remember_me": '0',
           "_method": 'POST',
           "_csrfToken": csrfToken,
           "_Token[fields]": tokenFields,
           "_Token[unlocked]": ""
        })

        if response.url == "https://www.urionlinejudge.com.br/judge/pt":
            return True
        else:
            return False

    def __extesion__(self,language):
        if language == "Python" or language == "Python3":
            return ".py"
        elif language == "C++":
            return ".cpp"
        elif language == "C":
            return ".c"
        elif language == "Java":
            return ".java"
        elif language == "Ruby":
            return ".rb"

    def get_user_url(self):
        page = self.session.get(self.home_url).text
        soup = BeautifulSoup(page, 'html5lib')
        user_url = "https://www.urionlinejudge.com.br" + soup.find('a')['href']

        return user_url

    def __remove_blanks__(self,string):
        answer = ""
        for i in string:
            if i.isalnum() or i == '+':
                answer += i
        return answer

    def get_problems(self):
        problems_pages = 1
        problems_pages_url = self.get_user_url() + "?page="
        submissions_table = []
        problems_id_table = []
        problems_language_table = []
        while(True):
            problems_url = problems_pages_url + str(problems_pages)
            page = self.session.get(problems_url).text
            soup = BeautifulSoup(page,'html5lib')
            final_problems_page = soup.find('h2')
            if final_problems_page != None:
                break
            submissions_table_aux = soup.find_all('td')
            for index_submission in range(3,len(submissions_table_aux),7):
                index_id = index_submission - 3
                index_language = index_submission + 1
                string_aux_submission = self.__remove_blanks__(submissions_table_aux[index_submission].text)
                string_aux_id = self.__remove_blanks__(submissions_table_aux[index_id].text)
                string_aux_language = self.__remove_blanks__(submissions_table_aux[index_language].text)
                if len(string_aux_submission) != 0:
                    submissions_table.append(string_aux_submission)
                if len(string_aux_id) != 0:
                    problems_id_table.append(string_aux_id)
                if len(string_aux_language) != 0:
                    problems_language_table.append(string_aux_language)
            problems_pages += 1

        self.problems_id = problems_id_table
        self.problems_language = problems_language_table
        self.problems_submissions = submissions_table

    def save_problems(self):
        self.get_problems()
        cont = 1
        for i in range(0,len(self.problems_id)):
            problem_url = "https://www.urionlinejudge.com.br/judge/pt/runs/code/"
            problem_url += self.problems_submissions[i]
            page = self.session.get(problem_url).text
            soup = BeautifulSoup(page,'html5lib')
            cod = soup.find(attrs={'id':"code"})
            directory = "problems"
            if not os.path.exists(directory):
                os.makedirs(directory)
            f = open("problems/" + self.problems_id[i] + self.__extesion__(self.problems_language[i]), "w")
            f.write(cod.text.encode('utf-8'))
            f.close()
            print cont,"de",len(self.problems_submissions)
            cont += 1

if __name__ == '__main__':
    usr = raw_input("Digite seu email: ")
    pw = getpass("Digite sua senha: ")
    uri = user_Uri(usr,pw)
    while not uri.login():
        print "Erro no login, tente novamente"
        usr = raw_input("Digite seu email: ")
        pw = getpass("Digite sua senha: ")
        uri = user_Uri(usr,pw)

    uri.save_problems()
