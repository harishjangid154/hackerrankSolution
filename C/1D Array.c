#include<stdio.h>

int main(){
	
	int n,i,sum = 0,c,a[1000];
	
	scanf("%d",&n);
	
	//best way for this question
	/*
	for(i = 0; i < n; ++i){
		scanf("%d",&c);
		sum = sum + c;
	}
	*/ 
	for(i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n; ++i){
		sum = sum + a[i];
	}
	printf("%d",sum);
	
	
	return 0;
}
