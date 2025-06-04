#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main(){
     char name[]="Lucknow Junction";
     for(int i=0; i<strlen(name); i++){
        if(isalpha(name[i])){
          name[i]=toupper(name[i]);
        }
     }
     printf("%s\n",name);
     return 0;
 }
