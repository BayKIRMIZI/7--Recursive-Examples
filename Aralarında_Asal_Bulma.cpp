#include<stdio.h>
#include<conio.h>
int i=2;
int sayac=0;
int aralarinda_asal(int s1,int s2,int i)
{   if(i<=s1 || i<=s2) 
    {        if(s1%i==0 && s2%i==0)
             {  printf("\nBolen sayi = %d\n",i);
			    sayac++;
             }
             return aralarinda_asal(s1,s2,i+1);
    }
    else if(sayac> 0) {printf("\nAralarinda asal degildir.\n");printf("%d tane sayi ortak bolendir .",sayac);}
    else if(sayac==0) printf("\nAralarinda asaldir\n");
}
int main()
{
	int s1,s2;
	printf("1. Sayiyi giriniz :"); scanf("%d",&s1); 
    printf("2. Sayiyi giriniz :"); scanf("%d",&s2);
	aralarinda_asal(s1,s2,i);
	getch();
	return 0;
}
