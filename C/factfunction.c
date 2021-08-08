#include <stdio.h>
int fact(int n)
{ int i, f=1;
  for(i=1;i<=n;i++)
  {
      f=f*i;
  }
  return f;
}
int factrec(int n)
{
  if(n==0)
  {
   return 1;
  }
  else
  {
   return (n*factrec(n-1));
  }
}
int main()
{int n;
  //system("clear");
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("Factorial of %i using recursive function  =%d  :  \n",n,factrec(n));
  printf("Factorial of %i using non recursive function  =%d :  \n",n,fact(n));

}