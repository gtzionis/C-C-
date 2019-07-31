// fimponatsi //
#include <stdio.h>
#include <stdlib.h>

int result,prev,sum,num,pros8eseis;
int mhn(int );
int ana(int );
main()
{
      printf(" give me the num ") ;                         
      scanf("%d",&num);
      printf("\n\n the fibo(%d)  ana is %d",num,ana(num));
      printf("\n\n the fibo(%d) mh  is %d",num,mh(num));
      
      
      
      
int ana(int n);
{
    printf("\n the fibo(%d) ",num);
      if (n==0)
      result=0;
      else if (n==1)
      result=1;
      else
      {
          result=ana(n-1)+ana(n-2);
          pros8eseis++;
      }
      return result;
}
int mh(int n)
{
    printf("\n the fibo(%d) ",num);
    result=1;
    prev=-1;
    int p,i;
    for(i=0;i<num;i++)
    {
       sum=prev+result;
       prev=result;
       result=sum;
       p++;
    }
    printf("    
}
    
