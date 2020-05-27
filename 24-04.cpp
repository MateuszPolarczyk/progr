#include <iostream>
#include <fstream>
#include <string>

using namespace std; 


int main(int argc, char** argv) {
	string linia;
	
	ifstream input;
	ofstream output;
	input.open("input.txt");
	output.open("output.json");
	
	if(input.good()){
		output << "[	\n	";	
			while(!input.eof()){
					getline(input, linia);
						output << "\n { \n \"imie\" : \"" << linia << ",\"";
						
					getline(input, linia);
						output << "\n \"nazwisko\" : \"" << linia << "\"\n},";
			}
		output << "\n]";
	}
	input.close();
	output.close();
	
	cout<<"Plik zapisany w JSON!";	
	return 0;
}
