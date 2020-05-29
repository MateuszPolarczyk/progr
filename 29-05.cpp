#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;
ofstream output;

void wypiszLiczbeLosowa(int max){
	int a;
	a = rand()%max;
	cout << a;
}

void wypiszLiczbeJSON(int liczba){
	int b;
	b=rand()%liczba+1;
	output << "[\n{\n \"liczba:\": " << b << "\n}\n]";
}

int main(int argc, char** argv) {
	
	srand(time(NULL));
	output.open("output.json");
	
	cout << "Wczytaj liczbe losowa: ";
	cin >> max;
	cout << "Wczytaj liczbe losowa JSON: ";
	cin >> liczba;
	
	wypiszLiczbeLosowa(max);
	wypiszLiczbeJSON(liczba);
	
	output.close();
	return 0;
}
