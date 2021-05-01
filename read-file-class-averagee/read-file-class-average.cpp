//Yasin Ertune - Vize ve Final notu dosyadan alinan ogrencilerin sinif ortlamasini bulan program
#include <stdio.h>
int main()
{ 	
  char name[20],surname[20];
  int id,midterm,final,selection;
  float avg;
  
  float total;
  int counter=0;
  FILE *fp;
  fp = fopen("Student_exam.txt", "r"); 
  printf("No\tName\tSurname\tMidterm\tFinal\tAvarage\n");
  printf("-----------------------------------------------\n");
  while (!feof(fp)) 
  {
  	counter++;
	fscanf(fp," %d\t%s\t%s\t%d\t%d\t%f\n",&id,&name,&surname,&midterm,&final,&avg); 
	total+=avg;
	printf("%d\t%s\t%s\t%d\t%d\t%.1f\n",id,name,surname,midterm,final,avg);
  }
  	printf("-----------------------------------------------\n");
  printf("Class Average:%.1f\n",total/counter);
  printf("There are %d students in the class.\n\n\n",counter);
  fclose(fp);  
  return 0; 
}


