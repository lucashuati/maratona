#include <stdio.h>
#include <stdlib.h>


int verifica(){
    int i, j,k;
    int sudoku[9][9], vec[9][9],c[9]={0};
    for(i = 0; i < 9;i++){
            for(j = 0; j < 9;j++){
                scanf("%d",&sudoku[j][i]);
                if(i<3 && j<3){vec[0][c[0]]=sudoku[j][i];c[0]++;}
                if(i<3 && j<6 && j>=3){vec[1][c[1]]=sudoku[j][i];c[1]++;}
                if(i<3 && j<9 && j>=6){vec[2][c[2]]=sudoku[j][i];c[2]++;}
                if(i>=3 && i<6 && j<3){vec[3][c[3]]=sudoku[j][i];c[3]++;}
                if(i>=3 && i<6 && j<6 && j>=3){vec[4][c[4]]=sudoku[j][i];c[4]++;}
                if(i>=3 && i<6 && j<9 && j>=6){vec[5][c[5]]=sudoku[j][i];c[5]++;}
                if(i>=6 && j<3){vec[6][c[6]]=sudoku[j][i];c[6]++;}
                if(i>=6 && j<6 && j>=3){vec[7][c[7]]=sudoku[j][i];c[7]++;}
                if(i>=6 && j<9 && j>=6){vec[8][c[8]]=sudoku[j][i];c[8]++;}

            }
        }
    for(i = 0; i < 9;i++){
        for(j = 0; j < 9;j++){
            for(k = 0; k< 8;k++){
                if(sudoku[i][j] == sudoku[i][k+1] && (k+1) != j)
                    return 1;

                if(sudoku[i][j] == sudoku[k+1][j] && (k+1) != i)
                    return 1;

                if(vec[i][j] == vec[i][k+1] && (k+1) != j)
                    return 1;
            }
        }
    }
    return 0;
}


int main(){
    int ins=1,l;

    scanf("%d",&l);
    while(ins <= l){
        printf("Instancia %d\n%s\n\n",ins,verifica()==1 ? "NAO" : "SIM");
        ins++;
    }
    return 0;
}

