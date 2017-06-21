#include <iostream>

int main()
{
	int i=50,m=100,sum=0;
	while(i<=m)
	{
		sum+=i;
		i++;
	}
	std::cout<<"the sum is: "<<sum<<std::endl;

	i=10,m=0,sum=0;
	while(i>=m)
	{
		sum+=i;
		i--;
	}

	std::cout<<"the sum is: "<<sum<<std::endl;

	std::cout<<"Please input to Number: "<<std::endl;
	std::cin>>i>>m;
	if(i>m)
	{	//10,8
		i=i-m; //2,8
		m=m+i; //2,10
		i=m-i; //
	}
	sum=0;
	while(i<=m)
	{
		sum+=i;
		i++;
	}
	std::cout<<"the sum is: "<<sum<<std::endl;

return 0;
}
