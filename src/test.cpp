import fraction;
import <iostream>;
import <concepts>;

frt::fraction a{1};
frt::fraction<long long> b{2};

template<std::signed_integral Int1,std::signed_integral Int2>
void swap(frt::fraction<Int1>& v1,frt::fraction<Int2>& v2){
	v1+=v2;
	v2=v1-v2;
	v1-=v2;
}

auto main()->int{
	std::cout<<(a+=2)<<std::endl
		<<(a/=2)<<std::endl
		<<(a*=3)<<std::endl
		<<(a-=1)<<std::endl;
	std::cout<<a<<' '<<b<<std::endl;
	swap(a,b);
	std::cout<<a<<' '<<b<<std::endl;
	std::cout<<frt::fraction{-1}+frt::fraction{1,2}<<std::endl;

	return double{frt::fraction{0}};
}
