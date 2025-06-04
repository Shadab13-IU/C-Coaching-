#include<stdio.h>
 int main(){
     int num,i,j;
     int a[15];
     printf("Enter a num: ");
     scanf("%d",&num);
     i=0;
     while(num>0){
           a[i]=num%2;
           num/=2;
           i++;
     }
     for(int j=i-1; j>=0; j--){
         printf("%d",a[j]);
     }
     printf("\n");
     return 0;
 }
      
 
