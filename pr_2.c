#include<stdio.h>

int sum(int a[],int size){
	
	int sum = 0,i;
	for(i=0; i<size; i++){
		
		sum += a[i];
		
	}
	return sum;
}
int main(){
	
	int size,i,total;
	
	printf("Enter a size of array : ");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter a element : ");
	for(i=0; i<size; i++){
		
		scanf("%d",&a[i]);
	}
	
	total = sum(a,size);
	
	printf("Sum => %d\n",total);
	
	return 0;
}
