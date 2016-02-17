
#include <stdio.h>
int main(int argc,char* argv[])
{

	int a[10];
	a[0]=5;
	int *p=a;
	int *q=&a;
	int *m=a[0];

	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d\n",m);
	printf("%d\n",0[a]);
	return 0;
}
