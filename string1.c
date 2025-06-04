#include<stdio.h>
#include<string.h>
 //int stringlen(char*);
 
 int main(){
     /*char str[]="Lucknow";
     char* city="Lucknow";
     char name[]={'L','u','k','n','o','w','\0'};
     printf("%s\n",str);
     printf("s\n",city);
     printf("%s\n",name);
     str[0]='t';
     printf("%s\n",str);
     city="Kanpur";
     printf("%s\n",city);*/
     char* city="Lucknow";
     int len=strlen(city);
     printf("len of string=%d\n",len);

     /*int stringlen(char* s){
     int length=-1;
     while(s[++length]!='\0');
     return length;*/
     return 0;
 }    
 
