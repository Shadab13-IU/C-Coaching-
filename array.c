#include<stdio.h>
 int a[5];
 int main(){
     int b[5];
     int c[5]={2,4,5,3,7};
     int d[5]={8,10};
     int e[5]={5};
     for(int i=0; i<5; i++){
         printf("%d\t%d\t%d\t%d\t%d\n",a[i],b[i],c[i],d[i],e[i]);
     } 
     return 0;
 }
