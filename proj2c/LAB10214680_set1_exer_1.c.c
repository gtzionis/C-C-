// ÃÑÇÃÏÑÇÓ ÔÆÉÙÍÇÓ Á.Ì. 2011030012 //
#include <stdio.h>
#include <stdlib.h>

int anadromikh(int i,float *p,float g,float s,int mege8os)
{
      if(i<mege8os)// pros8esh pollaplasiasmos ka8e stoixeiou tou pinaka kai apo8hkeush se metablhtes //
      {
          s=s+p[i];
          g=g*p[i];
          return anadromikh(++i,p,g,s,mege8os);//au3anoume to i wste na paei mexri i<j //
      }
      
      if (s>=g)
         return 1;
      else if (g>s)
           return -1;
      
}


int i,j;

main()
{
      float *p; //pinakas//
      
      printf("diastaseis pinaka ");
      scanf("%d",&j);
      while(j<=0)//elenxos gia or8o pinaka //
      {
                 scanf("%d",&j);
      }
      p=(float*)malloc(j*sizeof(float)); // desmeush xwrou //
      
      for(i=0;i<j;i++)
      {
                      printf("numbers of the shells ");
                      scanf("%f",&p[i]);
      }
     
      
      printf("the larger is %d ",anadromikh(0,p,1,0,j));  //apaotelesma //
      system("pause");
      return 0;
}

