#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int pierwsza, druga;
	int licznik = 1;
	
	ifstream plik;
	ofstream plik2;
	
	plik.open("a.txt");
	plik2.open("liczby.json");
	
	plik >> druga;
	if(plik.good()){
		while(!plik.eof()){
			pierwsza = druga;
			plik >> druga;
			if(pierwsza == druga){
				plik2 << "\n{\n\"liczba\": " << druga << ",\n\"miejsce\": " << licznik << "\n},"; 
			}
			licznik++;
		}
	}
	plik.close();
	plik2.close();
		
	return 0;
}
