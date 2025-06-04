#include<stdio.h>
 int main(){
	 unsigned int x;
	 int pos=1;
	 printf("Enter the  number");
	 scanf("%u",&x);
	 if((x&x-1)==0){
	   while(x!=0){
            if((x^1)==0){
	      if((pos&1)==1){
              printf("Power of 4\n");
	      break;
	      }else{
		printf("not in power of 4\n");break;
	       }
	   }	
	 }
	 x=x>>1;
	 pos++;	   
	 }else{
	     printf("NOt in power of 4\n");
	  }
	 return 0;
 }
