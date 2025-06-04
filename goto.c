#include<stdio.h>
 void printer(){
      ab:
      printf("Printer function\n");
 } 
 int main(){
     printf("Inside main function\n");
     goto ab;
     printf("Main function\n");
     //ab:
     printf("End of main function\n");
     return 0;
 }
