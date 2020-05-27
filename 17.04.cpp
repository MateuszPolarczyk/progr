#include <iostream>
#include <fstream>

using namespace std;


int main() {
	int t[1000];
	int x = 0;
	
	ifstream input;
	ofstream output;
	input.open("input.txt");
	output.open("output.txt");
	
	if(input.good()){
		while(!input.eof()){
			input >> t[x++];
		}
	}
	
	if(output.good()){
		for(int i=x-1; i >=0; i--){
			output << " " << t[i];
		}
	}
	
	cout<<"Plik zapisany";
	
	input.close();
	output.close();
	return 0;
}
