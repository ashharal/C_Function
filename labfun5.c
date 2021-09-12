//5. WAP to check whether a number is palindrome.

#include<stdio.h>
int main()
{
 int num, temp,rev, r,sum=0;
 printf("enter value of any number ");
 scanf("%d",&num);
 temp=num;
 
 while(num!=0)
 {
 r=num%10;
 num=num/10;
 
sum = (sum*10)+r;
 
 }
 if(temp==sum)
 printf("%d is pallindrom",temp);
 else
 printf("%d is not pallindrom",temp);0
 
 return 0;
 }
 
 
  
