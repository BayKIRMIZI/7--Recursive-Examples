#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int topla(int a) 
{
	if( a == 1 )
	{
		return 1;
	}
	return a+topla(a-1);
}

int main ()	
{
	int sayi,sayi2;
	
	printf("Toplam icin giriniz: ");
	scanf("%d",&sayi);
	printf("0 dan %d ye kadar olan sayilarin toplami = %d",sayi,topla(sayi));
	
	
	getch();
	return 0;
}
