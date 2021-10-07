#include <iostream>
using namespace std;

class Zaslona {
	
	public:
		double integral();
		double f(double x);
		double g(double g);
};

double Zaslona::integral() {
	double sum = 0;
	double sum2 = 0;
	double x = 2;
	double szer = 0.00001;
	
	while(x < 10) {
		x += szer;
		sum += szer * this->g(x);
		sum2 += szer * this->f(x);
	}
	
	return -sum + sum2;
}

double Zaslona::f(double x) {
	return ((x*x*x*x)/500) - ((x*x)/200) - (3.0/250);
}

double Zaslona::g(double x) {
	return (-(x*x*x)/30) + (x/20) + (1.0/6);
}

int main(int argc, char** argv) {
	Zaslona z;
	cout << z.integral();
	return 0;
}
