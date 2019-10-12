#include<stdio.h>
#include<conio.h>
int topla(int sayi)
{
     if(sayi<=0) return 0;
     else return (sayi%10)+topla(sayi/10);
}
int main()
{
    int sayi;
    printf("sayi  giriniz : ");scanf("%d",&sayi);
    for(sayi;sayi>9;)
    {
    topla(sayi);
    sayi=topla(sayi);
    }
    printf("%d",topla(sayi));
    getch();
    return 0;
}
