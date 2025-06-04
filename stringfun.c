#include<stdio.h>
#include<string.h>
 int main(){
     char name[16]="Lucknow";
     char* city="Kanpur";
     // strcpy function //
     /*char* str=strcpy(name,city);
     printf("%s\n",name);
     printf("%s\n",city);
     printf("%s\n",str);*/

     // strncpy //
     /*strncpy(name,city,3);
     printf("%s\n",name);*/

     // strcat concat means add //
     /*strcat(name,city); // there must be space in name variable to concat
     printf("%s\n",name);

     // strncat //
     strncat(name,city,3);
     printf("%s\n",name);*/

     // strcmp and strncmp //
     char* s1="Lucknow";
     char* s2="Ludhiana";
     printf("%d\n",strcmp(s1,s2));
     printf("%d\n",strncmp(s1,s2,2));

     // strchr and strrchr //
     char* s="Lucknow Junction";
     char* st=strchr(s,'u');
     printf("%s\n",st);
     char* stt=strrchr(s,'u');
     printf("%s\n",stt);

     // strstr //
     char* r=strstr(s,"now");
     printf("%s\n",r);
     return 0;
 }

