#include<stdio.h>
#include<string.h>
#include <ctype.h>
void IsPalidrome(char A[],int len);
void Chesars(char A[],int len);
main(){
      char Array[100];
      int choice;
      printf("Please enter a string (100 characters max):");
      gets(Array);
      do{
                      printf("\n1.Check if the string is palidrome.\n");
                      printf("2.Encrypt the string using Ceasar's cipher.\n");
                      printf("3.Exit\n");
                      printf("Make your choice:");
                      scanf("%d",&choice);
                      switch(choice)
                      {
                                    case 1:{
                                                IsPalidrome(Array,strlen(Array));
                                                break;
                                                }
                                    case 2:{
                                                Chesars(Array,strlen(Array));
                                                break;
                                         
                                                }
                                    case 3:{
                                                printf("You Exit from the programm");
                                                break;
                                                }
                      }
       }while(choice!=3);
       system("pause");
       }
       void IsPalidrome(char A[],int len)
       {
          int len1=len;
          int flag=0;
          char B[100];
          int i,o=0;
          int j=0;
          for(i=0;i<len;i++)
          {
               if(A[i]>='A'&&A[i]<='Z')
               {
                     A[i]=A[i]+32;
                                       }  
               if(A[i]>=' '&&A[i]<='@')
               len1--;
               else
               {
               B[o]=A[i];
               o++;
               }                    
                            }
            if(len1%2==0)
            {
                while(j!=len1){
                         if(B[j]!=B[len1-1]){
                                          printf("\nThe string is not Palidrome.\n");
                                          flag=1;
                                          break;
                                          }
                                          j++;
                                          len1--;
                                          }
                                          }
          else if(flag%2==1){
                while(j!=len1+1){
                         if(B[j]!=B[len1-1]){
                                          printf("\nThe string is not Palidrome.\n");
                                          flag=1;
                                          break;
                                          }
                                          j++;
                                          len1--;
                                          }
               }
            if(flag==0)
            printf("\nThe string is Palidrome.\n");
            }
       void Chesars(char A[],int len)
       {
           int key;
           printf("Please insert the key:"); 
           scanf("%d",&key);
           int i;
           for(i=0;i<len;i++)
           {
                               if(A[i]>='A'&&A[i]<='Z'||A[i]>='a'&&A[i]<='z')
                               {
                                         A[i]=A[i]+key;
                                         if(A[i]+key>'z')
                                         A[i]=A[i]+key-26;
                                         if(A[i]+key<'a')
                                         A[i]=A[i]+key+27;
                               
                                                                                
                                                                        }
                               
                               }
                               printf("\nThe code is %s",A);
            }            
            
