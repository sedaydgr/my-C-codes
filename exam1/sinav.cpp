//5 ki�ilik s�n�fta s�navda 60 �st� alan ki�i say�s� 

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
