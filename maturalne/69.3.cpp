#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

class Gen {
	
	ifstream file;
	string geny;
	
	int max = 0;
	int genDl = 0;
	
	public:
		~Gen();
		void read();
		int iloscGenow(string gen);
};

int Gen::iloscGenow(string gen) {
	// auto - typ zmiennej zostaje automatycznie ustalony na podstawie wartosci
	regex gens_regex("AA([^B]|B[^B])*BB");
	
	// sregex - regex dla stringow
	auto start = sregex_iterator(gen.begin(), gen.end(), gens_regex); // pasujacy gen
	auto end = sregex_iterator(); // ostatni pasujacy gen
	
	return distance(start, end); // ilosc pasujacych genow
}

void Gen::read() {
	file.open("dane.txt");
	
	if(file.good()) {
		while(!file.eof()) {
			file >> geny;
			
			if(max < iloscGenow(geny)) {
				max = iloscGenow(geny);
			}
		
		}
	}
	
	cout << "Najwieksza liczba genow w genotypie: " << max << "\n";
	// todo najdluzszy genotyp
	cout << "Najdluzszy genotyp: " << genDl;
}

Gen::~Gen() {
	file.close();
}

int main(int argc, char** argv) {
	Gen g;
	g.read();
	return 0;
}
