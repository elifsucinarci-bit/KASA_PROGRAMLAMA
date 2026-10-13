#include <stdio.h>
#include <math.h>

int main(){
	// KURAL 1: Ürün tutarý ve ödenen para float deðikenlerde tutuluyor.
	float urun_tutari, odenen_para;
	
	// Kullanýcýdan giriþlerin alýmasý
	printf(" Urun tutarýný giriniz(TL): ");
	scanf("%f", &urun_tutari);
	printf("odenen parayi giriniz(TL): ");
	scanf("%f", &odenen_para);
	
	float para_ustu_float= odenen_para-urun_tutari;
	
	int kalan_kurus= (int)roundf(para_ustu_float* 100);
	
	int toplam_kupur_sayisi= 0;
	int adet= 0;
	
	printf("\n--- PARA USTU DETAYI (%d Kurus)---\n",kalan_kurus);
	
	
	//200TL= 20000 Kuruþ
	adet=kalan_kurus / 20000;
	toplam_kupur_sayisi+= adet;
	printf("200 TL:%d adet \n", adet);
	kalan_kurus %= 20000;
	
	//100TL= 10000 Kuruþ
	adet=kalan_kurus/ 10000;
	toplam_kupur_sayisi+=adet;
	printf("100 TL: %d adet\n", adet);
	kalan_kurus%= 10000;
	
	
	// 50TL = 5000 Kuruþ
	adet= kalan_kurus / 5000;
	toplam_kupur_sayisi+= adet;
	printf("50 TL: %d adet\n", adet);
	kalan_kurus%= 5000;
	
	// 20TL = 2000 Kuruþ
	adet= kalan_kurus / 2000;
	toplam_kupur_sayisi+= adet;
	printf("20 TL: %d adet\n", adet);
	kalan_kurus %= 2000;
	
	// 10 TL = 1000 Kuruþ
	adet=kalan_kurus/1000;
	toplam_kupur_sayisi+= adet;
	printf("10 TL: %d adet\n", adet);
	kalan_kurus%=1000
	
	//5 TL =500 Kuruþ
	;adet= kalan_kurus/ 500;
	toplam_kupur_sayisi += adet;
	printf("5 TL : %d adet\n", adet);
	kalan_kurus %= 500;
	
	// 1 TL = 100 Kuruþ 
	adet= kalan_kurus / 100;
	toplam_kupur_sayisi+= adet;
	printf(" 1 TL : %d adet\n", adet);
	kalan_kurus%=100;
	
	//50 Kuruþ 
	adet= kalan_kurus/ 50;
	toplam_kupur_sayisi+= adet;
	printf("50 Kurus: %d adet\n",adet);
	kalan_kurus %=50;
	
	//25 Kuruþ
	adet= kalan_kurus / 25;
	toplam_kupur_sayisi+= adet;
	printf("25 Kurus : %d adet\n", adet);
	kalan_kurus%= 25;
	
	// 10 Kuruþ 
	adet=kalan_kurus/ 10;
	toplam_kupur_sayisi+= adet;
	printf("10 Kurus: %d adet\n", adet);
	kalan_kurus%=10;
	
	// 5Kuruþ 
	adet=kalan_kurus/1;
	toplam_kupur_sayisi+= adet;
	printf("5 Kurus: %d adet\n",adet);
	kalan_kurus%=5;
	
	//1 Kuruþ
	adet=kalan_kurus/1;
	toplam_kupur_sayisi+= adet;
	printf("1 Kurus: %d adet\n",adet);
	
	printf("-----------\n");
	printf("Toplam Verilen Kupur Sayisi: %d\n", toplam_kupur_sayisi);
	
	return 0;
	
	
	
}
