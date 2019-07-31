#include<stdio.h>
int R0=0;
int R1,R2,R3,R4;
main(){
      int odd;
      R1=1016865;
      odd=R1;
      int j;
      j=R0;
      R2=7;
      R3=0x1;
lab_while_loop:
if (!(R0<R2)) goto lab_endwhile;
if(!(R0&R3)) goto lab_endif;
printf("odd\n");
R1++;
lab_endif:
R0++;
goto lab_while_loop;
lab_endwhile:
printf("%d",R1);
system("pause");
       }     
