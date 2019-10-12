#include <stdio.h>
#include <stdlib.h>
int asal_bul(int sayi) 
{
   int i,asal;
   if (sayi==0 || sayi==1) return 1;
   else {
      for(i=2;i<(sayi/2)+1;i++){
         if(sayi%i==0) 
		 {
         asal=1;
		 break;	
		 } 
      }
      if(asal!=1) printf("\n%d",sayi);
      return asal_bul(sayi-1);
   }
}
main() {
   while(1==1)
   {
   int sayi;
   printf("\n\nKaca Kadar Olan Asal Sayilar Gosterilsin:"); scanf("%d",&sayi);
   asal_bul(sayi);
  }
   system("PAUSE");
}

