#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	int t[10];
	int min = t[0];
	
	ifstream input;
	ofstream output;
	input.open("a.txt");
	output.open("liczba.json");
	
	if(input.good()){
		while(!input.eof()){
			for(int i=0; i<10; i++){
				input >> t[i];
			}
		}
	}
	
	for(int i=0; i<10; i++){
		if(min > t[i]){
			min = t[i];
		}
	}
	
	output << "[\n{ \n \"najmniejsza\": " << min << "\n} \n]"; 
	cout<<"Zapisany";

	input.close();
	output.close();
	
	return 0;
}
