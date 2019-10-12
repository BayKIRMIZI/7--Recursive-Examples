#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fnk(int a,int b)
{
       if(b==0) return a;
       else return fnk(b,a%b); 
}
int fnk1(int a,int b)
{
 return a*b/fnk(a,b);
}
int main()
{
    int a,b,c,d;
    printf("Birinci sayiyi girin : ");
    scanf("%d",&a);
    printf("Ikinci  sayiyi girin : ");    
    scanf("%d",&b);
    
    c=fnk(b,a%b);
    printf("E.B.O.B = %d\n\n\n",c);
    
    d=fnk1(a,b);
    //printf("%d x %d / fnk(%d,%d) = %d\n\n\n",a,b,a,b,d);
    printf("E.K.O.K = %d\n\n\n",d);
    system("PAUSE");
    system("CLS");
    getch();
    return 0;
}
