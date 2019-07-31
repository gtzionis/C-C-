// ÃÑÇÃÏÑÇÓ ÔÆÉÙÍÇÓ Á.Ì.2011030012 //
#include <stdio.h>
#include <stdlib.h>

struct list
{
       int *p;
       int data;
       struct list *next;
}ex;

int found(int *p,int i,int j,int s); 

int found(int *p,int i,int j,int s)
{
    
    //epana lhpsh ews to i,j //
    if(i<j)
    {
       if(p[i]==p[i+1]==p[i+2])//an 3 ari8moi einai idoioi na mpei //
       {
                              s=p[i];
                              printf("the number is %d ",s);
                              return(p,++i,j,s);                                 
       }
       else return(p,++i,j,s);
       }      
       
       
       return s;
       
}





main()
{
      
      int i,j,s;
      printf("posous ari8mous exoume ");
      scanf("%d",&j);// posa arxeia //
      ex.p=(int*)malloc(j*sizeof(int)); // desmeush xwrou //
      for(i=0;i<j;i++) //eisagwgei akeraiwn //
      {
                       printf("number ");
                       scanf("%d",&ex.p[i]);
                       while(ex.p[i]<0)
                       {
                                    printf("no negatives numbers ");
                                    scanf("%d",&ex.p[i]);
                       }
      

        
      }
      
      found(ex.p,0,j,s); //klhsh sunarthshs //
      
      system("pause");
      return 0;
            
}
