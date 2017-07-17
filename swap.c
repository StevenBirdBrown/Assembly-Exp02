#include <stdio.h>
void xor_swap(int *x,int *y)
{
	*y=*x^*y;//Step 1
	*x=*x^*y;//Step 2
	*y=*x^*y;//Step 3
}
int main()
{
	int a=1;
	int b=2;
	xor_swap(&a,&b);
	return 0;
}
