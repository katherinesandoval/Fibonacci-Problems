// Name: Katherine Sandoval
// This program finds the exact value of f(100), f(500), and f(1000).

#include <iostream>
#include "bigint.h"
using namespace std;

BigInt iterativeFibo(int);

int main(){
	
	cout << "Fib(100) is: \n" << iterativeFibo(100) << endl << endl;
	cout << "Fib(500) is: \n" << iterativeFibo(500) << endl << endl;
	cout << "Fib(1000) is: \n" << iterativeFibo(1000) << endl << endl;
	
	return 0;
}

BigInt iterativeFibo(int n){
	
	BigInt x = 0;
	BigInt y = 1;
	BigInt z;
	
	if(n == 0)
		return 0;
	else
		for(int i = 1; i < n; i++){
			z = x + y;
			x = y;
			y = z;
		}
	
	return y;
}