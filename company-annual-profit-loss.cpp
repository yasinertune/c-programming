//Yasin Ertune - 2 veya daha fazla sirketin yillik bilancosunu cikartan program
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int companies[2][12],value=0,a_big,a_small,b_big,b_small,a_big_month=0,b_big_month=0,a_small_month=0,b_small_month=0;
	float a_total=0,b_total=0;
	
	for(int i=0;i<2;i++)	//þirketlerin yaptýðý satýþlarý dolduruyoruz
	{
		for(int j=0;j<12;j++)
		{
			printf("%d. sirketin %d. ay kar'ini giriniz: ",i+1,j+1);
			scanf("%d",&value);
			companies[i][j]=value;
			if(i==0)
				a_total+=value;
			else
				b_total+=value;
		}		
		printf("\n");
	}
	
	for(int i=0;i<2;i++)	//Þirketlerin en büyük ve en küçük satýþ yaptýðý ayý buldurma
	{
		if(i==0)
		{	a_big=companies[0][0];
			a_small=companies[0][0];
			for(int j=1;j<12;j++)
			{
	        	if(a_big<companies[i][j])	
	        	{
	        		a_big=companies[i][j];	
	        		a_big_month=j;
				}
	            		
	            if(a_small>companies[i][j])	
	            {
	            	a_small=companies[i][j];
	            	a_small_month=j;
				}  			
			}
		}
		
		if(i==1)
		{
			b_big=companies[1][0];
			b_small=companies[1][0];
			for(int j=1;j<12;j++)
			{
	        	if(b_big<companies[i][j])
				{
					b_big=companies[i][j];
					b_big_month=j;
				}	
	            		
	            if(b_small>companies[i][j])
				{
					b_small=companies[i][j];
					b_small_month=j;	
				}	    		
			}
		}
    }
    
    
    a_big_month++;
    a_small_month++;
    b_big_month++;
    b_small_month++;
    printf("\t\tYILLIK ORTALAMASI \tYILLIK NET KARI \tEN COK SATIS  \t EN AZ SATIS  \n");
	printf("A Sirketinin \t  %fTL \t\t    %dTL  \t\t %d.Ay %dTL \t %d.ay %dTL\n",(a_total/12),int(a_total),a_big_month++,a_big,a_small_month++,a_small);
	printf("B Sirketinin \t  %fTL \t\t    %dTL  \t\t %d.Ay %dTL \t %d.ay %dTL\n",(b_total/12),int(b_total),b_big_month++,b_big,b_small_month++,b_small);
}

