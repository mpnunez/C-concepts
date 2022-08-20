#include <iostream>

// concept for integral types
template<class T>
concept integer_concept = std::is_integral_v<T>;

template <
	typename T
	>
requires integer_concept<T>
void print(T a){
	std::cout << "This is an integer: " << a << std::endl;
}

// concept for floating types
template<class T>
concept float_concept = std::is_floating_point_v<T>;

template <
	typename T
	>
requires float_concept<T>
void print(T a){
	std::cout << "This is a floating point: " << a << std::endl;
}

int main(){
	
	const int a = 2;
	const long b = 3;
	const float c = 4;
	const double d = 5;
	
	print(a);
	print(b);
	print(c);
	print(d);
	
	return 0;
}