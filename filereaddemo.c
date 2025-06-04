#include<stdio.h>
 int main(){
     FILE* file=fopen("abc.txt","r");
     if(file==NULL){
       printf("could not open file\n");
     }
     int data;
     while((data=fgetc(file))!=-1){
          printf("%c",data);
     }
     return 0;
 }

