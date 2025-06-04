#include<stdio.h>
#include<string.h>
 int main(){
     char temp;
     char name[]="Lucknow";
     int j= strlen(name)-1;
     int i=0;
     printf("string before reverse=%s\n",name);
     while(j>i){ 
           temp=name[i];
           name[i]=name[j];
           name[j]=temp;
            i++;
            j--;
     }
     printf("string after reverse=%s\n",name);
     return 0;
 }
