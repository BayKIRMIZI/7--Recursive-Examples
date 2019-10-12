#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char* Bosluklari_Temizle(char *cumle)
{
	if(cumle[0] == '\0')
	{
		return "";
	}
	if(cumle[0] == ' ')
	{
		return Bosluklari_Temizle(++cumle);
	}
	char * sonuc = (char*)malloc(sizeof(char)+strlen(cumle));
	sonuc[0]=cumle[0];
	strcat(sonuc,Bosluklari_Temizle(++cumle));
	return sonuc;
}

int main ()	
{
	char * mesaj = "Recursive Ornegi - > Bosluklari Temizleme";
	char *sonuc = Bosluklari_Temizle(mesaj);
	printf("Sonuc: %s",sonuc);
	
	getch();
	return 0;
}
