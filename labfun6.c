//6. WAP to check whether a number is Armstrong number.

#include<stdio.h>
int main()
{
 int num, r, sum=0, temp;
  printf("enter value of any number");
  scanf("%d", &num);
  
  temp=num;
  while(num>0)
  {
  r=num%10;
  
  sum =sum+ (r*r*r);
  num=num/10;
  
  }
  
  if(sum==temp)
  printf(" %d is armstrong number",temp);
  else
  printf("%d is not armstrong number",temp);
   return 0;
   }
  
  
