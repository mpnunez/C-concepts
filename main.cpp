#include <iostream>



template <
	typename T
	>
void print(T a){
	std::cout << "This is a number: " << a << std::endl;
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