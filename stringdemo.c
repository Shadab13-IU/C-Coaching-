#include<stdio.h>
#include<string.h>
       int main(){
           // strncmp  function 
           char* str1="Lucknow";
           char* str2="Lucklater";
           printf("%d\n",strncmp(str1,str2,5));
           
           // strncmp function
           char* str3="lucknow";
           char* str4="Lucknow";
           printf("%d\n",strcmp(str3,str4));
         
          //
           char* str="Lucknow junction";
           char ch='n';
           char *p1=strchr(str,ch);
           char *p2=strrchr(str,ch);

           printf("%s\n",p1);
           printf("%s\n",p2);
           
           char* p3=strchr(str,'a');
           if(p3==NULL){
            printf("p3 is null");
           }


         /* char* str1="Lucknow junction";
          char* str2="now";
        
          char* p=strstr(str1,str2);
          printf("%s\n",p);

          char* str3="nowj";
          char* p1=strstr(str1,str3);
          if(p1==NULL){
            printf("p1 is a null");
          }*/
           return 0;
       } 

x
