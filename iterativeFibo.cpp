// Name: Katherine Sandoval
// This is an iterative function that inputs a nonnegative integer n and returns the nth Fibonacci number. 

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