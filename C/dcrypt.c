#include<stdio.h>
#include<string.h>

void main(){
	FILE *source, *target;
	int key = 12;
	char c,d;
	source = fopen("target.txt","r+"); // change the file name 
	target = fopen("output.txt","w");
	if(source == NULL){
		printf("file not found - ");
	}
	else{
		while((c = fgetc(source)) != EOF){
			d = c - key;
			printf("%c",d);
			fputc(d,target);
		}
	}
	fclose(source);
	fclose(target);
}
