#include <stdio.h>
#define SIZE 10

void bubblesort(double *tab)
{
  double temp;
  int i,n;
  
  for(i=1;i<SIZE;i++)
    {
      for(n=SIZE-1;n>=i;n--)
	{
	  if(tab[n-1]>tab[n])
	    {
	      temp = tab[n-1];
	      tab[n-1]=tab[n];
	      tab[n]=temp;  
	    }
	}
    }
}
void insertionsort(double *tab)
{
  double temp;
  int i=1;
  int j=0;
  
  for(i=1;i<SIZE;i++)
    {
        temp=tab[i];
        j=i-1;
 
        while((temp<tab[j])&&(j>=0))
	  {
            tab[j+1]=tab[j];
	    j=j-1;
	  }
	tab[j+1]=temp;
    }
}
void selectionsort(double *tab)
{
  double temp;
  int i=1;
  int n=0;
  int k=0;
  
  for(i=0;i<SIZE;i++)
    {
      k=i;
      temp=tab[i];
      for(n=i+1; n<SIZE; n++)
	{
	  if(tab[n]<temp)
	    {
	      k=n;
	      temp=tab[n];
	    }
	}
      tab[k]=tab[i];
      tab[i]=temp;
    }
  
}


int main()
{
  double tab[SIZE] = {1.1 , 4.3 , 6.7 , -3.4, 2.4 , 0.1 , 4.2 , -1.2, 0.01 , 1.3 };
  double tab1[SIZE] = {1.1 , 4.3 , 6.7 , -3.4, 2.4 , 0.1 , 4.2 , -1.2, 0.01 , 1.3 };
  double tab2[SIZE] = {1.1 , 4.3 , 6.7 , -3.4, 2.4 , 0.1 , 4.2 , -1.2, 0.01 , 1.3 };
  double tab3[SIZE] = {1.1 , 4.3 , 6.7 , -3.4, 2.4 , 0.1 , 4.2 , -1.2, 0.01 , 1.3 };
  
  bubblesort(tab1);
  insertionsort(tab2);
  selectionsort(tab3);
  //----------------------------

  printf("bubble sort\n");
  
  for(int n=0;n<SIZE;n++)
    {
      printf("%1.1f ",tab1[n]);
    }
  printf("\nselectionsort\n");
  
  for(int n=0;n<SIZE;n++)
    {
      printf("%1.1f ",tab2[n]);
    }
  printf("\ninsertionsort\n");
  
  for(int n=0;n<SIZE;n++)
    {
      printf("%1.1f ",tab3[n]);
    }
  printf("\noriginal\n");
  
  for(int n=0;n<SIZE;n++)
    {
      printf("%1.1f ",tab[n]);
    }
  printf("\n");
}