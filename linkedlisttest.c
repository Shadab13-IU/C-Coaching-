#include<stdio.h>
#include<stdlib.h>
 struct node{
        int data;
        struct node* next;
 }*head=NULL;
 int main(int argc,char argv[]){
     int option;
     while(1){
          printf("1.Create list\n");
          printf("2. traverse list\n");

          printf("10.Exit\n");
          printf("ENter option\n");
          scanf("%d",&option);
          switch(option){
                case 1:  
                     printf("List created\n");
                     break;
                case 2:
                     printf("List traversal\n");
                     break;
                case 3:
                     exit(0);
                default:
                     printf("Wrong option\n");
         }
     }
     return 0;
 }
 
