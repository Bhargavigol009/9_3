#include<stdio.h>

void main(){


char oldpass[50] = "123456",pass[50];
  int n;
  
  printf("enter your email: ");
  printf("enter your pass: ");
  gets(pass);
  
  n = strcmp(oldpass,pass);
  
  if(1==0)
  {
  	printf("you loged in....");
  }
  else
  {
  	printf("login not successful...");
  }

}
