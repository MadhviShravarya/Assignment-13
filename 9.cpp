#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
  int n,r;
  printf("enter the number \n");
  scanf("%d",&n);
  printf("enter the power");
  scanf("%d",&r);
  printf("%d",power(n,r));
  return 0;
}
int power(int n ,int r)
{
   if(r==1||r==0)
     {
     return pow(n,r);
      }
   return pow(n,r-1) * pow(n,r-2) ;
}

