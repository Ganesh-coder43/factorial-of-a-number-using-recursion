//factorial of a number using recursive function
#include<stdio.h>
int fact(int );
int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int a=9;
	printf("factorial of %d is : %d",a,fact(a));
	return 0;
}
