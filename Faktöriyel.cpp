#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int faktoriyel(int sayi)
{
	if(sayi==0)
	{
		return 1;
	}
	else
	{
		return sayi*faktoriyel(sayi-1);
	}
}

int main ()	
{
	printf("Faktoriyel icin sayi giriniz: ");
	int sayi,sayi2;
	scanf("%d",&sayi);
	printf("%d ! = %d",sayi,faktoriyel(sayi));
	
	getch();
	return 0;
}
