//Yasin Ertune - Vize ve final notu girilen ogrencilerin ortalamasini txt dosyasina yazdýran program
#include <stdio.h>
int main()
{ 
  FILE *fp;  
  fp=fopen("Student_exam.txt","a+");	//hem yazmak hemde okumak icin a+ kullanilir.    
  if(fp == NULL)
  {         
  	printf("The file couldn't be opened. %d\n",fp);         
	return 0;        
  } 
  else
  	printf("The file is opened. \n\n");
  	
  char name[20],surname[20];
  int id,note1,note2,avg,selection;
  
  printf("\nEnter the number of students:");
  scanf("%d",&selection);
  for(int i=0;i<selection;i++)
  {
  	printf("\n%d. Student:\n",i+1);
  		printf("No:");
  		scanf("%d",&id);
  		
  		printf("Name:");
  		scanf("%s",&name);
  		
  		printf("Surname:");
  		scanf("%s",&surname);
  		
  		printf("Midterm:");
  		scanf("%d",&note1);
		  
		printf("Final:");	
		scanf("%d",&note2);
		avg=(note1*0.40)+(note2*0.60);
  		fprintf(fp,"%d\t%s\t%s\t%d\t%d\t%.1f\n", id,name,surname,note1,note2,(float)avg); 
  }
  fclose(fp); 
  return 0;
}


