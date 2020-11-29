#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);
	
	int m = (n*2) - 1;
	
	for(int i = 0; i < m ; ++i){
		for(int j = 0; j < m; ++j){
			if( i == 0 || i == 8){
				printf("%d ",n);
			}
			else if( j == 0 || j == 8){
				printf("%d ",n);
			}
			else if( (i == 1 || i == 7) && ( j >=1 || j<=7)){
				printf("%d ",n-1);
			}
			else if( (j == 1 || j == 7) && ( i >=1 || i<=7)){
				printf("%d ",n-1);
			}
			else if( (i == 2 || i == 6) && ( j >=2 || j<=6)){
				printf("%d ",n-2);
			}
			else if( (j == 2 || j == 6) && ( i >=2 || i<=6)){
				printf("%d ",n-2);
			}
			else if( (i == 3 || i == 5) && ( j >=3 || j<=5)){
				printf("%d ",n-3);
			}
			else if( (j == 3 || j == 5) && ( i >=3 || i<=5)){
				printf("%d ",n-3);
			}
			else if( (i == 4 || i == 4) && ( j >=4 || j<=4)){
				printf("%d ",n-4);
			}
			else if( (j == 4 || j == 4) && ( i >=4 || i<=4)){
				printf("%d ",n-4);
			}
			
			
			
		}
		printf("\n");
	}
}
