//Yasin Ertune - C dilinde string islemleri
#include <stdio.h>
#include <string.h>

int main(){
	
	char first_word[20],second_word[20];
	printf("Birinci Kelime:");
	gets(first_word);
	printf("Ýkinci Kelime:");
	gets(second_word);
	strlwr(first_word); 
	strupr(second_word);	
	
	printf("1. Kelimenin uzunlugu: %d \t Hafizada tuttugu alan: %d \n",strlen(first_word),sizeof(first_word));
	printf("2. Kelimenin uzunlugu: %d \t Hafizada tuttugu alan: %d \n",strlen(second_word),sizeof(second_word));
	strupr(first_word);
	strlwr(second_word);
	printf("1. Kelime buyuk harflere cevrildi: %s \n",first_word);
	printf("2. Kelime kucuk harflere cevrildi: %s \n",second_word);
	
	
	printf("\n1.Kelimenin ilk 3 harfi: ");
	for(int i=0;i<3;i++)	//birincinin ilk 3 harfini yazdirdik
		printf("%c",first_word[i]);
	printf("\n2.Kelimenin ilk 3 harfi: ");
	for(int i=0;i<3;i++)	//ikincinin ilk 3 harfini yazdirdik
		printf("%c",second_word[i]);	
	
	char word[20];
	printf("\n\n\nKelime giriniz:");
	gets(word);
	
	if(strlen(word)==5)
		printf("Girilen Kelime 5 harflidir.\n");
	else
		printf("Girilen kelime 5 harfli degildir.\n");
		
	printf("Girilen kelimenin tersi:%s \n\n",strrev(word));
	strrev(word);	
		
	if(strcmp(word,strrev(word))==0)
		printf("Kelime palindromiktir. Kelimeniz: %s ",word);
	else
		printf("Kelime palindromik degildir. Kelimeniz: %s ",word);
		
	//strlen: Girilen kelimenin uzunlugunu verir
	//sizeof: Dizinin RAM'de kapladigi alani verir
	//strcmp: Ýki kelimeyi karsilastirir. Ayniysa:0  Farkliysa:1 degerini verir.
	//strrev: Kelimeyi ters cevirir. Kelimeyi ters cevirdikten sonra tekrar cevirmezsek hep ters islem gorur.
	//substr: Bunun icin for dongusunu kullaniyoruz. C++ da tanimli burda tanimli degil.
	//strlwr: Kelimenin hepsini kucuk yapar.
	//strupr: Kelimenin hepsini buyuk yapar
}


