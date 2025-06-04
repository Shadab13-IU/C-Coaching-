#include<stdio.h>
 int main(){
     printf("Enter the character\n");
     int data=getchar(); 
     while((data=getchar())!='#'){
     putchar(data);
     }
 return 0;
}
