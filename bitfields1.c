#include<stdio.h>
 int main(){
     struct protocol{
            unsigned char parity:2;
            unsigned char checksum:4;
     }tcp;
     printf("%d\n",(int)sizeof(tcp));
     tcp.parity=3;
     printf("%d\n",tcp.parity);
     tcp.parity=4; // will store value upto 4 bit till 15 not 16
     printf("%d\n",tcp.parity); //  it will print as  parity will only store value upto 2bit 
     return 0;
 }
