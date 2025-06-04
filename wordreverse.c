#include<stdio.h>
#include<string.h>
 int main(){
     char str[]="My name is shadab";
     int s=0;
     for(int i=0; i<=strlen(str); i++){
        if(str[i]==' ' ||str[i]=='\0'){
          int j=i-1;
          while(s<j){
               char temp=str[s];
               str[s]=str[j];
               str[j]=temp;
               j--;
               s++;
          }
          s=i+1;
        }
     }
     printf("%s\n",str);
     return 0;
 }
