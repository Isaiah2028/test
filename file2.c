#include<stdio.h>
int main() {
	int *p1, *p2, *p;
	int a, b;

	scanf_s("%d,%d\n",&a,&b);
	p1 = &a;
	p2 = &b;

	if (a<b) {
		p = p1;
		p1 = p2;
		p1 = p1;

	}
	
	printf("a = %d,b = %d\n",a,b);
	printf("max = %d,min = %d\n",*p1,*p2);
	

	return 0;
}