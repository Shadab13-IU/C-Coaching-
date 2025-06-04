#include<stdio.h>
 int main(){
     FILE* fp=fopen("z1.txt","r");
     if(fp==NULL){
        printf("Could not open file\n");
        return 0;
     }
     int data;
     while((data=fgetc(fp))!=-1){
          printf("%c",data);
     }
     fclose;
     return 0;
 }
