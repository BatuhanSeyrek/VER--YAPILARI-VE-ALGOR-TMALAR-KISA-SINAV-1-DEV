#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("*************************************************\n");
    printf("        EN KUCUK DEGERI BULAN UYGULAMA           \n");
    printf("*************************************************\n");
    
    int eleman;//1 saniyede gerçekleþir ve eleman deðerini tanýmladýk
	int sayi_kucuk;//1 saniyede gerçekleþir ve enbuyuk deðerini tanýmladýk
     
    printf("Dizinin eleman sayisini giriniz: ");//1 saniyede gerçekleþir
    scanf("%d",&eleman);//1 saniyede gerçekleþir
    int i=0;//1 saniyede gerçekleþir
    int dizi[eleman];//1 saniyede gerçekleþir ve dizi deðerinin içine eleman deðerini tanýmladýk
    while(i<eleman)//n+1 saniyede gerçekleþir 
    {
    	
        printf("Dizinin %d. degerini giriniz: ",i+1);//n saniyede gerçekleþir
        scanf("%d",&dizi[i]);//n saniyede gerçekleþir 
        if(i == 0){//n saniyede gerçekleþir ve i deðeri sýfýra eþitse durum gerçekleþir
            sayi_kucuk = dizi[i];//n saniyede gerçekleþir ve enbuyuk deðerini dizi[i] deðerine eþitledik
        }
         if(dizi[i] < sayi_kucuk){//n saniyede gerçekleþir
            sayi_kucuk = dizi[i];//n saniyede gerçekleþir ve enbuyuk deðerini dizi[i] deðerine eþitledik
        }
        i++;//n saniyede gerçekleþir
    }
    printf("Dizinin en kucuk degeri = %d",sayi_kucuk);//1 saniyede gerçekleþir 

}//T(n)=1+1+1+1+1+1+(n+1)+n+n+n+n+n+n+1=7n+8
