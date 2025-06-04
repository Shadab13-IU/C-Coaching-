#include<stdio.h>
#include<string.h>
        
         int main(){
             char str[20]="Lucknow";
             char* st=" junction";
              
             char* p=strcat(str,st);
             printf("%s\n",p);
    
             char* p2=strncat(str,"EAST",2);
             printf("%s\n",p2);
             
             return 0;
         }
