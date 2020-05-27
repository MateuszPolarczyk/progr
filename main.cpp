#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int linie = 0;
string x;

int main(){
	ifstream plik;
	plik.open("a.txt");
	if(plik.good()){
		while(!plik.eof()){
			plik >> x;
			cout<<linie++<<": "<<x<<"\n";
		}
	}
	string t[linie];
	linie = 0;
	if(plik.good()){
		while(!plik.eof()){
			linie++;
			plik >> x;
			t[linie] = x;
			cout<<t[linie];
		}
	}	
	plik.close();
	
	return 0;
}
