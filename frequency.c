#include<stdio.h>
#include<string.h>

int main(){
    char *str="Lucknow junction";
    int count=0;
        for(int i=0; i<strlen(str); i++){
           count=0;
           if(str[i]==' ')continue;
           for(int j=0; j<strlen(str); j++){
              if(j>=i&&str[i]==str[j]){
                count++; 
                }else if(j<i&&str[i]==str[j]){
                        break;
                }
              }
              if(count>0){
                      printf("%c %d\n",str[i],count);
              }
             }
            return 0; 
           }

          

     

