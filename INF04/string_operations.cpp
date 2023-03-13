#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

class Egzamin {
	
	ifstream input;
	ofstream output;
	
	string data;
	
	public:
		Egzamin();
		~Egzamin();
		void reverseString(string entryData);
		void sortAlphabetical(string entryData);
		void toUpperCase(string entryData);
		void countLetters(string entryData);
};

// konstruktor, otwiera strumień do pliku oraz zapisuje dane do zmiennej data
Egzamin::Egzamin() {
	input.open("dane.txt");
	
	if(input.good()) {
		while(!input.eof()) {
			input >> data;
			this->reverseString(data);
			this->sortAlphabetical(data);
			this->toUpperCase(data);
			this->countLetters(data);
		}
	}
}

// funkcja odwracajaca napis 
// przyjmuje jako parametr entryData(string)
void Egzamin::reverseString(string entryData) {
	reverse(entryData.begin(), entryData.end());
	cout << "odwrocony napis: " << entryData << "\n";
}

// funkcja odwracajaca napis, 
// przyjmuje jako parametr entryData (string)
void Egzamin::sortAlphabetical(string entryData) {
	sort(entryData.begin(), entryData.end());
	cout << "posortowane: " << entryData << "\n";
}

// funkcja zamieniajaca małe litery na duże,
// przyjmuje jako parametr entryData (string)
void Egzamin::toUpperCase(string entryData) {
	transform(entryData.begin(), entryData.end(), entryData.begin(), ::toupper);
	cout << "duze litery " << entryData << "\n";
}

// funkcja zliczajaca ilosc wystapien litery 'a' w napisie
// przyjmuje jako parametr entryData(string)
void Egzamin::countLetters(string entryData) {
	std::string::difference_type n = std::count(entryData.begin(), entryData.end(), 'a');
	cout << "Ilosc wystapien 'a': " << n;
}
// destruktor, zamykanie strumienia do pliku
Egzamin::~Egzamin() {
	input.close();
}
 
int main(int argc, char** argv) {
	Egzamin e;
	return 0;
}
