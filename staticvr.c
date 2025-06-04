#include<stdio.h>
 void printer();
 //int x=10;
 //extern int x;
 int main(){
     printer();
     //printer();
    // printer();
     //printf("x in main =%d\n",x);
     return 0;
 }
 void printer(){
     //static int x=10;
     const int x=4;
     static int y=x;
     printf("%d\n",y);
     //x++;
 }
