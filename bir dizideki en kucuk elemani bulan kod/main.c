#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("*************************************************\n");
    printf("        EN KUCUK DEGERI BULAN UYGULAMA           \n");
    printf("*************************************************\n");
    
    int eleman;//1 saniyede ger�ekle�ir ve eleman de�erini tan�mlad�k
	int sayi_kucuk;//1 saniyede ger�ekle�ir ve enbuyuk de�erini tan�mlad�k
     
    printf("Dizinin eleman sayisini giriniz: ");//1 saniyede ger�ekle�ir
    scanf("%d",&eleman);//1 saniyede ger�ekle�ir
    int i=0;//1 saniyede ger�ekle�ir
    int dizi[eleman];//1 saniyede ger�ekle�ir ve dizi de�erinin i�ine eleman de�erini tan�mlad�k
    while(i<eleman)//n+1 saniyede ger�ekle�ir 
    {
    	
        printf("Dizinin %d. degerini giriniz: ",i+1);//n saniyede ger�ekle�ir
        scanf("%d",&dizi[i]);//n saniyede ger�ekle�ir 
        if(i == 0){//n saniyede ger�ekle�ir ve i de�eri s�f�ra e�itse durum ger�ekle�ir
            sayi_kucuk = dizi[i];//n saniyede ger�ekle�ir ve enbuyuk de�erini dizi[i] de�erine e�itledik
        }
         if(dizi[i] < sayi_kucuk){//n saniyede ger�ekle�ir
            sayi_kucuk = dizi[i];//n saniyede ger�ekle�ir ve enbuyuk de�erini dizi[i] de�erine e�itledik
        }
        i++;//n saniyede ger�ekle�ir
    }
    printf("Dizinin en kucuk degeri = %d",sayi_kucuk);//1 saniyede ger�ekle�ir 

}//T(n)=1+1+1+1+1+1+(n+1)+n+n+n+n+n+n+1=7n+8
