#include<stdio.h>
 void copy(char*);
 int main(int argc,char* argv[]){
     if(argc<2){
       printf("Correct usage:Command/*<input file>*/ <output file>\n");
       return 0;
     }
     copy(argv[1]);
     return 0;
 }
 void copy(char* destination){
      FILE* fw=fopen(destination,"w");
      // FILE* fw=fopen(destination,"w");
     /* if(fr==NULL||fw==NULL){
        printf("could not open file\n");
      }else{
        int data;
        while((data=fgetc(fr))!=-1){
              fputc(data,fw);
        }
        fclose(fr);
        fclose(fw);
       }*/
       int data;
       while((data=getchar())!='#'){
            fputc(data,fw);
       }
       fclose(fw);
 }
