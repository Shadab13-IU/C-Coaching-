#include<stdio.h>

	int main(){
		int x;
		printf("Enter the  x:");
		scanf("%d",&x);
		if((x&1)==1){
		  printf("Odd number\n");
		}else{
		     printf("Even number\n");
		 }
		return 0;
	}

