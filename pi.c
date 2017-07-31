#include <stdio.h>
int main()
{
	int x=2147483673;
	int y=2147483673;
	printf("0x%x\n",((x+y))<<5+x-y);
	printf("0x%x\n",33*x+31*y);
	return 0;
}
