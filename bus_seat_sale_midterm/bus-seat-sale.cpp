//Yasin Ertune - Algoritma vize sinavinda yapildi. 
//Otobus bilet satis programý: 1-3 koltuk 55TL, 4-9 koltuk 35TL,geri kalan koltuklar ise 25TL 
//Sirasiyla satis yapiyoruz ve dosyaya yazdiriyoruz.
#include <stdio.h>

int main(void){
	
	FILE *fw;  
    fw=fopen("Seat_sale.txt","w");
    
    int selection,counter=1,corridor_counter=0,corridor_counter2=1;
    char name[30],surname[30];
    int price_55=0,price_35=0,price_25=0,total;
    
    printf("Bilet almak icin 1'e basiniz\n");
    printf("Bilet kesim islemini bitirmek icin 0 'a basiniz.\n\n");
    
    fprintf(fw,"\t\tOturma Düzeni\n\n");
    fprintf(fw,"     1\t\t    2\t \t\t   3\n");
    
    while(true)
    {
    	printf("\n\Seciminiz:");
    	scanf("%d",&selection);
    	if(selection==0)
  			break;
  		else
  		{
  			printf("Adi soyadi:");
			scanf("%s %s",&name,&surname);
			printf("Koltuk no:%d\n",counter);
			fprintf(fw,"%-5s %-5s\t",name,surname);
			counter++;
			corridor_counter++;
			corridor_counter2++;
			if(corridor_counter==2)	
			{
				fprintf(fw,"x\t");
				corridor_counter=-1;
			}
			if(corridor_counter2==4)	
			{
				fprintf(fw,"\n");
				corridor_counter2=1;
			}
				
			if(counter<5)	 
			{
				total+=55;
				price_55++;
			}
			else if(counter>3 && counter<11)
			{
				total+=35;
				price_35++;
			}
			else
			{
				total+=25;
				price_25++;
			}
		}
	}
	
	printf("\n\nSatilan toplam koltuk:%d",counter-1);
	printf("\nElde edilen toplam gelir:%d",total);
	printf("\n55 TL lik koltuklardan toplam %d adet satilmistir.",price_55);
	printf("\n35 TL lik koltuklardan toplam %d adet satilmistir.",price_35);
	printf("\n25 TL lik koltuklardan toplam %d adet satilmistir.",price_25);
	
	fprintf(fw,"\n\nSatilan toplam koltuk:%d",counter-1);
	fprintf(fw,"\nElde edilen toplam gelir:%d",total);
	fprintf(fw,"\n55 TL lik koltuklardan toplam %d adet satilmistir.",price_55);
	fprintf(fw,"\n35 TL lik koltuklardan toplam %d adet satilmistir.",price_35);
	fprintf(fw,"\n25 TL lik koltuklardan toplam %d adet satilmistir.",price_25);
	
	fclose(fw);   
}
