#include <iostream>

using std::cout;
using std::endl;

int main() {
	//Fibonacci sequence

	int sum = 0;
	int f1 = 1;
	int f2 = 2;
	sum = f2;
	int n = f2 + f1;

	while (n<4000000) {
		if (n%2==0) {
			sum+=n;
		}
		f1 = f2;
		f2 = n;
		n = f2 + f1;
	}

	cout<<"The sum of the even-valued terms is: "<<sum<<endl;
	
	return 0;
}
