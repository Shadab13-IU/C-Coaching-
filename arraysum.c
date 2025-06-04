#include<stdio.h>
 int main(){
     int a[8]={2,4,6,1,3,5,9,10};
     int sum=0;
     for(int i=0; i<8; i++){
     sum+=a[i];
     }
     printf("sum of element is  %d\n",sum);
     return 0;
 }
