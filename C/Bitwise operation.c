#include<stdio.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,max_or = 0,max_and = 0,maxEor = 0;
  for(i = 1; i <= n; ++i){
  	for(j = i+1; j <= n; ++j){
  		if(((i&j) > max_and ) && (i&j) < k){
  			max_and = (i&j);
		  }
		if(((i|j) > max_or ) && (i|j) < k){
  			max_or = (i|j);
		  }
		if(((i^j) > maxEor ) && (i^j) < k){
  			maxEor = (i^j);
		  }
	  }
  }
  printf("%d\n%d\n%d",max_and,max_or,maxEor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

