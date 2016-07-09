#include <iostream>
#include <cstdlib>
#include <cstdio>
int a,b,c,d;
char e,f,g;

void  soma()
{
	int i,j,k,div;
	div = 1;
	i = (a*d)+(b*c);
	j = b*d;
	if(j<i)
	{
		for(k=2;k<=j;k++)
		{
			if(j%k == 0 && i%k==0)
			div = k;
		}
		printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
	}
	else if(j>i)
		{
		for(k=2;k<=i;k++)
			{	
				if(j%k == 0 && i%k==0)
				div = k;
			}
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}
	else 
		{
			div = j;
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}
}

void sub()
{
	int i,j,k,l,div;
	div =1;
	l = (a*d)-(b*c);
	j = b*d; 
	if(l<0)
		i = l*(-1);
	else
		i = l;
	if(j<i)
	{
		for(k=2;k<=j;k++)
		{
			if(j%k == 0 && i%k==0)
			div = k;
		}
		printf("%d/%d = %d/%d\n",l,j,l/div,j/div);
	}
	else if(j>i)
		{
		for(k=2;k<=i;k++)
			{	
				if(j%k == 0 && i%k==0)
				div = k;
			}
			printf("%d/%d = %d/%d\n",l,j,l/div,j/div);
		}
	else 
		{
			div = j;
			printf("%d/%d = %d/%d\n",l,j,l/div,j/div);
		}
}

void mult()
{
	int i,j,k,div;
	div = 1;
	i = a*c;
	j = b*d;
	if(j<i)
	{
		for(k=2;k<=j;k++)
		{
			if((j%k == 0) && (i%k==0))
			div = k;
		}
		printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
	}
	else if(j>i)
		{
		for(k=2;k<=i;k++)
			{	
				if((j%k == 0) && (i%k==0))
				div = k;
			}
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}
	else 
		{
			div = j;
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}
}

void div()
{
	int i,j,k,div;
	div = 1;
	i = a*d;
	j = b*c;
	if(j<i)
	{
		for(k=2;k<=j;k++)
		{
			if(j%k == 0 && i%k==0)
			div = k;
		}
		printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
	}
	else if(j>i)
		{
		for(k=2;k<=i;k++)
			{	
				if(j%k == 0 && i%k==0)
				div = k;
			}
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}
	else 
		{
			div = j;
			printf("%d/%d = %d/%d\n",i,j,i/div,j/div);
		}

}

int main ()
{
	int t;
	scanf("%d ",&t);
	while(t>0)
	{
		scanf("%d %c %d %c %d %c %d ",&a,&e,&b,&f,&c,&g,&d);
		if(f == '+')
		soma();
		else if(f == '-')
		sub();
		else if(f == '*')
		mult();
		else 
		div();
		t--;
	}
	return 0;
}
	
