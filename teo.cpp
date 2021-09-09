#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int k = 1;
	int t[100];
	char x[12] = {0, 9, 7, '+', 3, '*', 5, 4, '-', 2, '*', '-'};
	int a = 0;
	int b = 0;

	for(int i=1; i<11; i++) {
		/*if(isdigit(x[i])) {
			t[k] = x[i];
		}*/
		if(x[i] != '*' && x[i] != '+' && x[i] != '-'){
			t[k] = (int)x[i];
			//cout << "! " << t[k];
		}
		if(x[i] == '*' || x[i] == '-'|| x[i] == '+') {
			b = t[k-1];
			a = t[k-2];
			k = k-2;
			if(x[i] == '+') {
				t[k] = a+b;
			} else if(x[i] == '-') {
				t[k] = a-b;
			} else if(x[i] == '*') {
				t[k] = a*b;
			}
		}

		cout << t[k] << "\n";
		cout << endl;
		k++;
	}	
	return 0;
}
