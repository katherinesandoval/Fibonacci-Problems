// Name: Katherine Sandoval
// This program finds as many prime Fibonacci numbers of the type long long int.

#include <iostream>
#include <cmath>
using namespace std;

long long int iterativeFibo(int);
bool isPrime(long long int);

int main(){

	int limit = 83;

	cout << "Prime Fibonacci numbers:" << endl;

	for(int i = 0; i <= limit; i++){
		if(isPrime(iterativeFibo(i)))
			cout << iterativeFibo(i) << endl;
	}
	
	return 0;
}

bool isPrime(long long int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}


long long int iterativeFibo(int n){
	
	long long int x = 0;
	long long int y = 1;
	long long int z;
	
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

