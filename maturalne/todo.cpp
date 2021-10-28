#include <iostream>
#include <fstream>

using namespace std;

class Zad {
	
	ifstream input;
	double A, B, C, D;
	double precision = 0.00001;
	public:
		double zad1();	
		double zad2();	
};


double Zad::zad1() {
	return (1.14833 + (-4.63636 * 1.5) + (6.44498 * 1.5 * 1.5) + (-1.95694 * 1.5 * 1.5 * 1.5));
}

double Zad::zad2() {
	/**
	start = 1 z ostatniego wiersza
	algo na max
	*/
}

int main(int argc, char** argv) {
	Zad z;
	cout << z.zad1();
	return 0;
}
