#include<stdio.h>
 int main(int argc,char** argv,char** envp){
     int i=1;
     if(argc==1)return 0;
     for(int i=1; i<argc; i++){
        printf("%s\n",argv[i]);
     }
     //process enviroment using double pointer //
     int j=0;
     while(envp[j]!='\0'){
          printf("%s\n",envp[j]);
          j++;
     }
     /*while(argv[i]!='\0'){
          printf("%s\n",argv[i]);
          i++;
     }*/
     return 0;
 }
