#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter 2 numbers");
  scanf("%d%d",&a,&b);
  c = a<<b;
  d=a>>b;
  printf("Left shift result = %d ",c);
  printf("\nRight shift result = %d ",d);
}