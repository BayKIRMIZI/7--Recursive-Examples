#include<stdio.h>
#include<windows.h>
#include<conio.h>
int fonk(int sayi1,int sayi2)
{
    if( sayi2 == 0 )
	{
		printf("0 a bolunemez !!!");
		return 0;
	}
    if( sayi1 < 0 )
	{
		if(sayi1 < 0 )
		{
			printf("Pozitif sayi giriniz!");
		}
		return 0;	
	}
    if( (sayi1 % sayi2) == 0 )
    {
        printf("\a\n%d %d a/e  bolunur \n\a",sayi1,sayi2);//Sleep(1000);
    }
    else  
    {
    	printf("\a\n%d %d a/e bolunmez \n\a",sayi1,sayi2);//Sleep(1000);
	}
   fonk(sayi1-1,sayi2);
}
int function(int sayi1,int sayi2)
{
	if(sayi1 <= 0 )
	{
		if(sayi1 == 0 )
		{
			printf("\a\n%d - %d a/e  bolunur ==> Sonuc: %d\n\a",sayi1,sayi2,0);//Sleep(1000);
		}
		if(sayi1 < 0 )
		{
			printf("Pozitif sayi giriniz!");
		}
		return 0;
	}
	else
	{
		if( sayi2 == 0 )
		{
			printf("0'a bolme olmaz !!!");
			return 0;
		}
		if( (sayi1 % sayi2) == 0 )
   		{
       		printf("\a\n%d - %d a/e  bolunur ==> Sonuc: %d\n\a",sayi1,sayi2,sayi1/sayi2);//Sleep(1000);
    	}
    	else  
    	{
    		printf("\a\n%d - %d a/e bolunmez \n\a",sayi1,sayi2);//Sleep(1000);
		}
		function(sayi1-1,sayi2);
	}
}
int main()
{

 int s1,s2,i;
 
	printf("Kaca kadar kontrol edilecek = ");
	scanf("%d",&s1);
	
	printf("Hangi sayiya bolunecek = ");
	scanf("%d",&s2);
	
	//fonk(s1,s2);
	function(s1,s2);

	getch();
	return 0;
}
