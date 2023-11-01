#include<iostream>
#include<ostream>
double power(double x, int n){
	if(n==0) return 1.0;
	else if (n > 0) return x * power(x, n - 1);
	else /* n < 0 */ return 1.0 / power(x, -n);
}

void prints(){
	std::cout << "I am inside power.cpp";
}
