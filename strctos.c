#include<stdio.h>
#include<string.h>
 int main(){
     char name[]="Lucknow junction";
     printf("%s\n",name);
     for(int i=0; i<strlen(name); i++){
        if(name[i]>=97 && name[i]<=120){
           name[i]=name[i]-32;
             /*if(name[i]==32)continue;
             name[i]=name[i]^32;*/
        }
     }
     printf("%s\n",name);
     return 0;
 }
