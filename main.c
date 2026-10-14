# include <stdio.h>
# include <math.h>

int main(){
	 float urun_tutari, odenen_para;
	 
	 printf("Urun tutarini giriniz(TL):");
	 scanf("%f" , &urun_tutari);
	 printf("Odenen parayi giriniz (TL):");
	 scanf("%f", &odenen_para);
	 
	 float para_ustu_float= odenen_para - urun_tutari;
	
	 int kalan_kurus =(int)roundf(para_ustu_float*100);
	 
	 int toplam_kupur_sayisi=0;
	 int adet=0;
	 
	 printf("\n---PARA USTU DETAYI (%d Kurus)---\n", kalan_kurus);
	 
	 //*  Bütün TL cinsindeki paraları kuruş cinsinde yaz *//
	 
	 //*200TL= 20000 Kuruş*//
	 adet=kalan_kurus / 20000;
	 toplam_kupur_sayisi += adet;
	 printf("200 TL:%d adet\n", adet);
	 kalan_kurus %= 20000;
	 
	 //*100 TL=10000 Kuruş*// 
	 adet=kalan_kurus / 10000;
	 toplam_kupur_sayisi+= adet;
	 printf("100 TL:%d adet\n", adet);
	 kalan_kurus %= 10000;
	 
	 //*50 TL=5000 Kuruş*//
	 adet= kalan_kurus / 5000;
	 toplam_kupur_sayisi+= adet;
	 printf("50 TL: %d adet \n", adet);
	 kalan_kurus %= 5000;
	 
	 //*20 TL= 2000 Kuruş*//
	 adet= kalan_kurus /2000 ;
	 toplam_kupur_sayisi += adet;
	 printf("20 TL: %d adet \n", adet);
	 kalan_kurus %= 2000
	 
	 //*10 TL= 1000 Kuruş*//
	 adet=kalan_kurus/ 1000;
	 toplam_kupur_sayisi+= adet;
	 printf("10 TL: %d adet \n", adet);
	 kalan_kurus%= 1000
	 
	 //*5TL=500 Kuruş;*//
	 adet=kalan_kurus/ 500;
	 toplam_kupur_sayisi+= adet;
	 printf("5 TL: %d adet \n", adet);
	 kalan_kurus%= 500;
	 
	 //*1TL= 100 Kuruş*//
	 adet=kalan_kurus/ 100;
	 toplam_kupur_sayisi+= adet;
	 printf("1TL: %d adet\n", adet);
	 kalan_kurus%= 100;
	 
	 //*50 Kuruş*//
	 adet=kalan_kurus/ 50;
	 toplam_kupur_sayisi+= adet;
	 printf("50Kurus : %d adet \n", adet);
	 kalan_kurus%= 50;
	 
	 //*25 Kuruş*//
	 adet=kalan_kurus/ 25;
	 toplam_kupur_sayisi+= adet;
	 printf("25 Kurus: %d adet \n", adet);
	 kalan_kurus%= 25;
	 
	 //*10 Kuruş*//
	 adet= kalan_kurus/ 10;
	 toplam_kupur_sayisi+= adet;
	 printf("10 Kurus: %d adet \n", adet);
	 kalan_kurus%= 10;
	 
	 //*5 Kuruş*//
	 adet= kalan_kurus/ 5;
	 toplam_kupur_sayisi+= adet;
	 printf("5 Kurus: %d adet \n", adet);
	 kalan_kurus%= 5;
	 
	 //*1 Kuruş*//
	 adet=kalan_kurus/ 1;
	 toplam_kupur_sayisi+= adet;
	 printf("1 Kurus: %d adet\n", adet);
	 
	 printf("-------------\n");
	 printf("Toplam Verilen Kupur Sayisi: %d\n", toplam_kupur_sayisi);
	 
	 return 0;
	 
	 
}
