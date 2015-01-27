// Name: Katherine Sandoval
// This program finds the smallest Fibonacci number greater than 1,000,000 and greater than 1,000,000,000.

#include <iostream>
using namespace std;

int iterativeFibo(int);

int main(){

	int num = 50, num1, num2;
	int limit1 = 1000000;
	int limit2 = 1000000000;
	

	for(int i = 0; i <= num; i++){
		if(iterativeFibo(i) > limit1){
			num1 = iterativeFibo(i);
			break;
		}
	}

	for(int i = 0; i <= num; i++){
		if(iterativeFibo(i) > limit2){
			num2 = iterativeFibo(i);
			break;
		}
	}
	
	cout << "The smallest Fibonacci number greater than 1,000,000 is: " << num1 << endl;
	cout << "The smallest Fibonacci number greater than 1,000,000,000 is: " << num2 << endl;
	
	return 0;
}

int iterativeFibo(int n){
	
	int x = 0;
	int y = 1;
	int z;
	
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

