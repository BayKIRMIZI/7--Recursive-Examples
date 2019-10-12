#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int fnk(int a,int b)
{
       if(b==0) return a;
       else return fnk(b,a%b); 
}
int main()
{
    int a,b,c;
    printf("Birinci sayiyi girin : ");
    scanf("%d",&a);
    printf("Ikinci  sayiyi girin : ");    
    scanf("%d",&b);
    
    c=fnk(a,b);
    printf("E.B.O.B = %d\n\n\n",c);
    
    system("PAUSE");
    system("CLS");
    getch();
    return 0;
}
