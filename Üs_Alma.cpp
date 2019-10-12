#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
long int us_al(int x,int y)
{
    if (x==0)
    {
    	return(1);
	}
    if (x>0 && y==0)
    {
    	return(1);
	}
    if (x>0 && y==1)
    {
    	return(x);
	}
    if (x>0 && y>1)
    {
    	return(us_al(x,(y-1))*x);
	}
    return 0;
}

int main ()	
{
	int sayi,sayi2;

	printf("Us alma icin 1.sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("Us alma icin 2.sayiyi giriniz: ");
	scanf("%d",&sayi2);
	printf("%d in %d. kuvveti = %d dir.",sayi,sayi2,us_al(sayi,sayi2));
	
	getch();
	return 0;
}
