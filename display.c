#include<stdlib.h>
#include<stdio.h>

int main(int argc,char*argv[]){
    if(argc==1){
      printf("No argument is passed\n");
      return 0;
    }
   /* for(int i=1; i<argc; i++){
       printf("%s\n",argv[i]);*/
    int i=1;
    while(argv[i]!=NULL){
        // printf("%d\n",atoi(argv[i]));
        printf("%s\n",argv[i]);
        i++;
    }
   
    return 0;
}    
