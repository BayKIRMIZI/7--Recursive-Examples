#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int fibonacci(int sayi)
{
	if(sayi==0 || sayi == 1)
	{
		return sayi;
	}
	else
	{
		return fibonacci(sayi-1)+fibonacci(sayi-2);
	}	
}

int main ()	
{
	int sayi;
	printf("Fibonacci icin sayi giriniz: ");
	scanf("%d",&sayi);
	printf("%d. fibonacci sayisi %d dir",sayi,fibonacci(sayi));
	
	getch();
	return 0;
}
