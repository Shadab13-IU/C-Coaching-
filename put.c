#include<stdio.h>

 int main(){
     FILE* fptr;
     int c;
     if((fptr=fopen("sample.txt","w"))==NULL)
     {
       printf("Error in openning file\n");
     }
     while((c=getchar())!=EOF)
     { 
       fputc(c,fptr);
     }
     fclose(fptr);
     return 0;
 }
