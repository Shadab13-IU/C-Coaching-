#include<stdio.h>

int getlength(char*);

int main(){
	char name[]="Adani";
	int len=getlength(name);
	printf("length=%d\n",len);
	return 0;
	}
	int getlength(char* s){
	int len=0;
	while(s[len]!='\0')len++;
	return len
}
