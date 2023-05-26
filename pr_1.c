#include<stdio.h>

int fact(int n){
	
	if(n>0){
	
		return n * fact(n-1);
	}
	
	else{
	
		return 1;
	}
}	
int main(){
		
		int i;
		printf("Enter a value:");
		scanf("%d",&i);
		
		printf("%d",fact(i));
	
	return 0;
	}

