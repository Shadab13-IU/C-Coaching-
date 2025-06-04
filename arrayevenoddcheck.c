#include<stdio.h>
 int main(){
     int a[7]={1,2,3,4,5,6,7};
     for(int i=0; i<7; i++){
        if(a[i]&1==1){
           printf("%d is odd\n",a[i]);
        }else{
           printf("%d is even\n",a[i]);
        }
     }
     return 0;
 }
