#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	char c,s[100],sen[100];
	scanf("%c",&c);
	scanf("\n"); // It will scan the new line character from last input "\n"
	scanf("%[^\n]%*c",&s);
	
	
	scanf("\n"); // It will scan the new line character from last input "\n"
	
	
	scanf("%[^\n]%*c",&sen);  // %[^\n] this arrgument work as condition that it won't stop reading characters until it get "\n" / newline
	printf("%c\n%s\n%s",c,s,sen);
    return 0;
}
