#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int countSix(int number, int type) {
	int counter = 0;
	
	if(type == 10) { // dziesietny
		while(number) {
			if(number %10 == 6) {
				counter++;
				number /= 10;
			}
		}
	} else if(type == 8) { // osoemkowy
		while(number) {
			if(number %8 == 6) {
				counter++;
				number /= 10;
			}
		}
	}
	
	return counter;
}

int main(int argc, char** argv) {
	
	int liczbaDec = 0;
	int liczbaOct = 0;
		
	ifstream file;
	file.open("liczby2.txt");
	
	for(int i=0; i<1000; i++) {
		file >> liczbaDec;
		cout << "Ilosc 6 w dziesietnym: " << countSix(liczbaDec, 10) << "\n";
		
		file >> liczbaOct;
		cout << "Ilosc 6 w osemkowym: " << countSix(liczbaOct, 8);
	}

	file.close();
	     
	return 0;
}
