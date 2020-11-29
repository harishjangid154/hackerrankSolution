#include<stdio.h>
void func(int a){
	printf("%d",a);
}

void main(){
	void(*fun_ptr1)(int) = func;
	void(*fun_ptr2)(int) = &func;
	void(*fun_ptr3)() = &func;
	void(*fun_ptr4)() = func;
}
