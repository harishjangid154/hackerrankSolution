#include<stdio.h>

int main(){
	int a,b,n;
	
	scanf("%d%d",&a,&b);
	for(n = a ; n <= b; ++n){
	/*
	if(n == 1)
    	printf("one\n");
    else if(n == 2)
    	printf("two\n");
    else if(n == 3)
    	printf("three\n");
    else if(n == 4)
    	printf("four\n");
    else if(n == 5)
    	printf("five\n");
    else if(n == 6)
    	printf("six\n");
    else if(n == 7)
    	printf("seven\n");
    else if(n == 8)
    	printf("eight\n");
    else if(n == 9)
    	printf("nine\n");
    else{
        if(n%2 == 0)
            printf("even\n");
        else  {
            printf("odd\n");
        }
    }
    */
    (n == 1 ) ? printf("one\n"): printf("") ;
    (n == 2 ) ? printf("two\n"): printf("");
    (n == 3 ) ? printf("three\n"): printf("");
    (n == 4 ) ? printf("four\n"): printf("");
    (n == 5 ) ? printf("five\n"): printf("");
    (n == 6 ) ? printf("six\n"): printf("");
    (n == 7 ) ? printf("seven\n"): printf("");
    (n == 8 ) ? printf("eight\n"): printf("");
    (n == 9) ? printf("nine\n"): printf("");
    (n > 9 && n%2 == 0) ? printf("even\n") : printf("");
    (n > 9 && n%2 != 0 ) ? printf("odd\n") : printf(""); 
	

}
	return 0;
}
