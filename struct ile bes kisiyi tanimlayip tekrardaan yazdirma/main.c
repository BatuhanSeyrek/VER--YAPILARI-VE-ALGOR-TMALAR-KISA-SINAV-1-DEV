#include <stdio.h>
#include <stdlib.h>
struct ogrenci_bilgileri{
 	char ad[20];
 	char soyad[20];
 	int sinif;
 	int no;
 	char bolum[20];
 };
 struct ogrenci_adresi{
 	char il[20];
 	char ilce[20];
 	char mahalle[20];
 	char sokak[20];
    char apartman_ad[20];
    int daire_no;
    };

int main(int argc, char *argv[]) {

	struct ogrenci_bilgileri bl;
	struct ogrenci_adresi ds;
	printf("NOT:bu programda en fazla bes kisinin bilgilerini yazip ve sadece bes kiþinin bilgilerini alabilirsiniz\n");
    int i=0;
    while(i<5){
	printf("******************************************************************************\n");
	printf("-------%d'inci ogrencinin okul bilgilerini ve adres bilgilerini giriniz-------\n",i+1);
    printf("******************************************************************************\n");
    	printf("%d'inci ogrencinin adi:",i+1);
    	scanf("%s",&bl.ad);
    	printf("%d'inci ogrencinin soyadi:",i+1);
    	scanf("%s",&bl.soyad);
    	printf("%d'inci ogrencinin no:",i+1);
    	scanf("%d",&bl.no);
    	printf("%d'inci ogrencinin sinifi:",i+1);
    	scanf("%d",&bl.sinif);
    	printf("%d'inci ogrencinin bolum:",i+1);
    	scanf("%s",&bl.bolum);
    	printf("%d'inci ogrencinin yasadigi il:",i+1);
    	scanf("%s",&ds.il);
    	printf("%d'inci ogrencinin yasadigi ilce:",i+1);
    	scanf("%s",&ds.ilce);
    	printf("%d'inci ogrencinin yasadigi mahalle:",i+1);
    	scanf("%s",&ds.mahalle);
    	printf("%d'inci ogrencinin yasadigi sokak:",i+1);
    	scanf("%s",&ds.sokak);
    	printf("%d'inci ogrencinin apartman adi:");
    	scanf("%s",&ds.apartman_ad);
    	printf("%d'inci ogrencinin daire nosu:");
    	scanf("%d",&ds.daire_no);
    	printf("\n");
    	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf("//////////-%d'inci ogrencinin okul bilgileri ve adres bilgileri///////////\n",i+1);
		printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");  
    	printf("%d'inci ogrencinin adi:%s \n",i+1,bl.ad);
    	printf("%d'inci ogrencinin soyadi:%s \n",i+1,bl.soyad);
    	printf("%d'inci ogrencinin no: %d \n",i+1,bl.no);
    	printf("%d'inci ogrencinin sinifi: %d \n",i+1,bl.sinif);
    	printf("%d'inci ogrencinin bolumu: %s\n",i+1,bl.bolum);
    	printf("%d'inci ogrencinin yasadigi il: %s \n",i+1,ds.il);
    	printf("%d'inci ogrencinin yasadigi ilce: %s \n",i+1,ds.ilce);
    	printf("%d'inci ogrencinin yasadigi mahalle: %s \n",i+1,ds.mahalle);
    	printf("%d'inci ogrencinin yasadigi sokak: %s \n",i+1,ds.sokak);
    	printf("%d'inci ogrencinin yasadigi apt. adi: %s \n",i+1,ds.apartman_ad);
    	printf("%d'inci ogrencinin yasadigi daire no: %d \n",i+1,ds.daire_no);
       i++;
	}
    	return 0;
}
