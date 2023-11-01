#include<iostream>
#include <memory>
#include <ostream>
#include "power.h"

//double power(double x, int n);	This is declared in power.h
extern int power_range;

int main(){
	prints(); 	//print() declared in power.h
	for(int i {-power_range}; i <= power_range; ++i){
		std::cout << power(8.0, i);
		std::cout << std::endl;
	}

}
