import fraction;
import <iostream>;

frt::fraction a{};
frt::fraction b{1l};
frt::fraction c{1ll};
frt::fraction d{1,1};

auto main()->int{
	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;
	std::cout<<c<<std::endl;
	std::cout<<d<<std::endl;

	return 0;
}
