#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int sayac=0;
void yaz(char *c)
{
     if(*c=='l' && *(c+1)=='i') sayac++;
     if(*c)
     {
           printf("%c",*c);
           yaz(c+1);
     }
     
}
int main()
{
    char a[]="Ali Kemali";
    yaz(a);
    
    printf(" de ' li ' %d defa gecmektedir...",sayac);
    
    getch();
    return 0;
    
}
