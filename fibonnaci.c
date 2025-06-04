#include<stdio.h>
 int fibb(int);
 int main(){
     int x;
     printf("Enter the number: ");
     scanf("%d",&x);
     // int result=fibb(x);
     for(int i=1; i<=x; i++){
        printf("%d\t",fibb(i));
     }
     printf("\n");
     return 0;
 }
 /* unsigned long fibb(unsigned int n){
     if(n==1 ||n==2)return 1;
     return fibb(n-1)+fibb(n-2);
 }*/
    int fibb(int n){
    //if(n==1 ||n==2)return 1;
    int t1=1;
    int t2=1;
    int nextterm=1;
    for(int i=3; i<=n; ++i){
       nextterm=t1+t2;
       t1=t2;
       t2=nextterm;
    }
    return nextterm;
 }
