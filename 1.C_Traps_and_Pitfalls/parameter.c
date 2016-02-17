#include <stdio.h>
double sqrt(double);

int main()
{
	// double s;
	// s=sqrt(2.0);
	// printf("%g\n",s);


	// int i;
	// char c;
	// for (int i = 0; i < 5; ++i)
	// {
	// 	/* code */
	// 	scanf("%d",&c);
	// 	printf("%d",i);
	// }


	int a[4];
	printf("%d\n",a[1]);
	int *p=a;
	printf("%d\n",p[1]);
	printf("%zu\n",sizeof(a));
	printf("%zu\n",sizeof(p));
}