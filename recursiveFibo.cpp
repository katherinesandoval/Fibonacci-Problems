// Name: Katherine Sandoval
// This is a recursive function that inputs a nonnegative integer n and returns the nth Fibonacci number. 

int recursiveFibo(int n){
	if(n == 0) return 0;
	else if (n == 1) return 1;
	else return recursiveFibo(n-1) + recursiveFibo(n-2);
}