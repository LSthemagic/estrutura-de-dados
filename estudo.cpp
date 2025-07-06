#include<stdio.h>
#include<stdlib.h>

int fatorial(int x){
	if(x==0 || x==1)return 1;
	return x * fatorial(x-1);
}

int fibonacci(int n){
	if(n < 0) return -1;
    if(n == 0) return 0;
    if(n == 1) return 1;
//    Fn = fn-1 + Fn-2
	return (fibonacci(n-1) + fibonacci(n-2));
}


int main(){
	printf("%d",fatorial(5));
	printf("\n%d",fatorial(6));
	printf("\n%d",fatorial(7));
	printf("\n \t ----------");
	printf("\n%d",fibonacci(5));
	printf("\n%d",fibonacci(6));
	printf("\n%d",fibonacci(7));
	return 0;
}
