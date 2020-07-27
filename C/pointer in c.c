#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
	int s = (*a) + (*b);
	int d = abs((*a) - (*b));
	*a = s;
	*b = d;     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
