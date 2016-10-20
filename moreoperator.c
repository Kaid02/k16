/*
 Student Name : Kabir D Shrestha
 Subject : Programming Fundamental
 Lab No. : 08
 Program : Write a C program to use of Relation operation.
 Date : 2016-10-21
 */
 #include<stdio.h>
 int main(){
	 int a,b;
	 printf("Enter the first integer:\n");
	 scanf("%d",&a);
	 
	 printf("Enter the secong integer:\n");
	 scanf("%d",&b);
	 
	 if (a==b){
		printf("\n%d is equal to %d",a,b);
	}
	else{ 
		printf("\n%d is not equal to %d",a,b);
	}
	if (a>b){
		printf("\n%d is greater than %d",a,b);
	}
	else {
		printf("\n%d is less than %d",a,b);
	}
	if (a>=b){
		printf("\n%d is greater or equal to %d",a,b);
	}
	else{
		printf("\n%d is less or equal to %d",a,b);
	}
		
	 return 0;
 }
