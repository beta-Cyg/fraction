#include<iostream>
import fraction;

frt::fraction a{};
frt::fraction b{1l};
frt::fraction c{1ll};
frt::fraction d{1,1};

int main(){
	std::cout<<sizeof(a)<<std::endl;
	std::cout<<sizeof(b)<<std::endl;
	std::cout<<sizeof(c)<<std::endl;
	std::cout<<sizeof(d)<<std::endl;

	return 0;
}
