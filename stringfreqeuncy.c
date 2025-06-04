#include<stdio.h>
#include<string.h>
 void showfrequencies(char* str){
      int len=strlen(str);
      int count=0;
      for(int i=0; i<strlen(str); i++){
         count=0;	
         if(str[i]==' ')continue;
         for(int j=0; j<strlen(str); j++){
             if(j>=i && str[i]==str[j]){
               count++;
             }
             if(j<i && str[i]==str[j]){
                   break;
              }
         }
         if(count>0){
           printf("%c-%d\n",str[i],count);
         }
      }
  }
      int main(){
      char  str[]="Lucknow junction";
      showfrequencies(str);
      return 0;
 }
     
