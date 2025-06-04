#include<stdio.h>
#include<string.h
int naiveAlgo(char* str,char* ptr){
    int lens=strlen(str);
    int lenp=strlen(ptr);
    	for(int i=0; i<(lens-lenp); i++){
	   if(ptr[0]==str[i]){
	     int j=1;
	     while(j<lenp&&ptr[j]==str[i+j])j++;
	     if(j==lenp)return 1;
	   }
	}
	return -1;
}
 int main(int argc,char* argv[]){
	char str="Lucknow is capital";
	char ptr="clap";
	naiveAlgo(str,ptr);
	return 0;
 }
