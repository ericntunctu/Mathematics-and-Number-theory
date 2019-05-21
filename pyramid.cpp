#include <iostream>
#include <math.h>
using namespace std;

// pyramid number

int pyramid(int n) {
	return n * (n + 1)*(2 * n + 1) / 6;
}

// octagonal number
// 3 i^2 - 2 i
// 1/2 n (1 + n) (-1 + 2 n)


bool is_square(int n){
	long double sr = sqrt(n);
	if (floor(sr) ==sr) { return true; 
	}
	else { return false; }
}
int main()
{  
	int i;
	for (i = 1; i <= 100; i++) {
		if (is_square(pyramid(i)) == 1)
{cout << i << " " << pyramid(i) << " " << sqrt(pyramid(i)) << endl;}
}
	

	


}