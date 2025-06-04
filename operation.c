#include<stdio.h>
 int main(){
     FILE* fpr=fopen("sample.text","r");
     FILE* fpw=fopen("copy.text","a");
     int data;
     while((data=fgetc(fpr))!=EOF){
          fputc(data,fpw);
     }
     fclose(fpr);
     fclose(fpw);
     

      return 0;
 }
