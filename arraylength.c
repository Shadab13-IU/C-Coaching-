#include<stdio.h>
 int main(){
     int a[]={2,3,5,4,8,10,7};
     int sum=a[0];
     int length=sizeof(a)/sizeof(a[0]);
     for(int i=1; i<length; i++){
         sum+=a[i];
         a[i]=sum;

     }
     for(int i=0; i<length; i++){
        printf("%d\t",a[i]);
     }
     printf("\n");
     //printf("length is %d\n",length);
     return 0;
 }
