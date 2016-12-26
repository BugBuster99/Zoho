#include<stdio.h>
void main()
{
  int sum,n,i,c;
  printf("Enter the number");
  c=0;
  sum=0;
  Scanf("%d",&n);
  while(n>0)
  {
    sum=sum+(n%10);
    c++;
    n=n/10;
  }
  printf("The sum of digits is: ",sum;);
  printf("\nThe number of digits is: ",c);
}
