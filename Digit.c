#include<stdio.h>
void main()
{
  int sum,n,c;
  printf("Enter the number");
  c=0;
  sum=0;
  scanf("%d",&n);
  while(n>0)
  {
    sum=sum+(n%10);
    c++;
    n=n/10;
  }
  printf("The sum of digits is: %d\n",sum);
  printf("The number of digits is: %d",c);
}
