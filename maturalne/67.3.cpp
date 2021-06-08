#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

/*
67.3 - binarny fraktal Fibonacci
*/

class Fib {

	public:
		unsigned long long fibo(int n);
		void binFibo();
};

unsigned long long Fib::fibo(int n) {
	if(n <= 1) {
		return n;
	}
	
	return fibo(n-2) + fibo(n-1);
}

void Fib::binFibo() {
	char buff[300];
	
	for(long long i = 1; i <= 40; i++) {		
		itoa(fibo(i), buff, 2);
		
		for(int j = 0; j < (27 - strlen(buff)); j++) {
			cout << 0;
		}
		
		cout << buff << "\n";
	}
}

int main(int argc, char** argv) {
	Fib f;
	f.binFibo();
	return 0;
}
