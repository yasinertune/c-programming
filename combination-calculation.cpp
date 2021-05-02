//Yasin Ertune - Kombinasyon hesaplama
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, r, i;  
	float fct1=1, fct2=1, fct3=1, result; 
	printf("n degerini giriniz: "); 
	scanf("%d", &n); 
	printf("r degerini giriniz: "); 
	scanf("%d", &r); // n! 
	
	for(i=n;i>=2;i--) //faktoriyel hesapliyoruz
		fct1=fct1*i; 
	
	printf("%d!/(%d-%d)!.%d!\n",n,n,r,r);
	
	for(i=r;i>=2;i--) 
		fct2=fct2*i;  // (n-r)! 
	
	for(i=(n-r);i>=2;i--) 
		fct3=fct3*i;  
	
	result = fct1 / (fct2 * fct3); 
	printf("Sonuc : %.1f", result);
}
