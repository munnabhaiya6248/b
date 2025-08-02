#include <stdio.h>
int main()
{
  int n1, n2, n3, n4, n5;
  int sum;
  float per;

  printf("please enter your mark subject wise : ");
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

  sum = n1 + n2 + n3 + n4 + n5;
  printf("your total no. is %d", sum);

  per = (sum) / 5;

  if (sum > 475)
  {
    printf("you are first ");
  }
  else
  {
    printf("your result is avarage ");
  }
  printf("your persentage is :%f", per);

  return 0;
}