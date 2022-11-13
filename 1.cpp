#include<stdio.h>;
int sum(int);

int main()
{
   int n,s;
   printf("enter the limit::");
   scanf("%d",&n);
   s=sum(n);
   printf("%d",s);
   return 0;
}
  int sum(int n)
 { 
   int s=0,i;
   for(i=1;i<=n;i++)
   {
     s = n + sum(n-1);
    
   }
   return s;

 } 


