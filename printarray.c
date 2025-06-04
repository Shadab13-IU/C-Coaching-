#include<stdio.h>
 void printarray(int*,int);
 int main(){
     int arr[]={2,3,4,5,6,7};
     int length=sizeof(arr)/sizeof(arr[0]);
     printarray(arr,length);
     return 0;
 }
 void printarray(int* a,int len){
      //int len=sizeof(a)/sizeof(a[0]); we can't get proper  length of array here bcz array passed in function is pointing two only starting of two elements so sizeof(a)/sizeof(a[0]) will return =8/4
      for(int i=0; i<len; i++){
         printf("%d\t",a[i]);	
      }
      printf("\n");
 }
