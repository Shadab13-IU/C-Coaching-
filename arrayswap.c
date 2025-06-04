#include<stdio.h>
 int main(){
     int a[8]={2,4,6,8,1,3,5,7};
     int length=sizeof(a)/sizeof(a[0]);
     int i=0, j=length-1,temp;
     while(i<j){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;    
          i++;
          j--;
    }
    for(int i=0; i<length; i++){
       printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
  }
