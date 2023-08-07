import fraction;
import <iostream>;

frt::fraction a{1};
frt::fraction<int16_t> b{2};

auto main()->int{
	std::cout<<(a+=2)<<std::endl
		<<(a/=2)<<std::endl
		<<(a*=3)<<std::endl
		<<(a-=1)<<std::endl;
	a=0;
	a+=b;
	std::cout<<frt::fraction{-1}<<std::endl;

	return 0;
}
