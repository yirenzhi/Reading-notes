#include <iostream>

int main()
{

	int m=0,n=0,num=1;
	std::cin>>m;
	while(std::cin>>n){
		if(m==n){
			num++;			
		}else{
			std::cout<<m<<" "<<num<<std::endl;
			m=n;
			num=1;
		}
	}

	std::cout<<m<<" "<<num<<std::endl;
	return 0;
}
