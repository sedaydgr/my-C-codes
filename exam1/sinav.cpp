//5 kiþilik sýnýfta sýnavda 60 üstü alan kiþi sayýsý 

#include<stdio.h>
#include<conio.h>

int main(){
	int dizi[5];
	int sayac;
	int toplam=0;
	
	for(sayac=0;sayac<5;sayac++){
		printf("Deger girin:"); scanf("%d",&dizi[sayac]);
		
		if(dizi[sayac]>=60){
			toplam++;
		}
		
	}
	
	printf("Dersten gecen sayisi:%d",toplam);
	
	return 0;
	
}
