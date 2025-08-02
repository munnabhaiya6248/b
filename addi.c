// my first program in c 
#include<stdio.h>
int main()
{

  int m1, m2, m3, m4 ,m5;
  int sum;
  float per;

  printf("Enter the five subject marks\n");
   scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
   sum = m1+m2+m3+m4+m5;
   per = (sum*100)/5;

   printf("the sum of subjects:%d",sum );
   printf("the persentage of five subjects are %d",per);


   return 0;


}