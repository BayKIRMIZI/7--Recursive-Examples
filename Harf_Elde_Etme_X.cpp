#include<stdio.h>
#include<conio.h>
int xYildiz_2(int n,int i,int j)
{
	if(j == n+1)
	{
		return -1;
	}
	if((i+j) == n+1 || i == j)
	{
		printf("*");
	}
	else
	{
		printf(" ");
	}
	xYildiz_2(n,i,j+1);
}

int xYildiz_1(int n,int i)
{
	if(i == n+1)
	{
		return -1;
	}
	xYildiz_2(n,i,1);
	printf("\n");
	xYildiz_1(n,i+1);
}


int main ()	
{
	int deger;
	printf("Yildiz Buyuklugu icin Deger Gir: ");
	scanf("%d",&deger);
	xYildiz_1(deger,1);
	getch();
	return 0;
}
