#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int sayac=0;
void yaz(char *c)
{
     if(*c=='e') sayac++;
     if(*c)
     {
           printf("%c",*c);
           yaz(c+1);
     }
}
int main()
{
    char a[]="Mehmete";
    yaz(a);
    printf(" de ' e ' %d defa gecmektedir...",sayac);
    getch();
    return 0;
}
