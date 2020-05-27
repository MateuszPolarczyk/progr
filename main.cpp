#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int x[100];
	int a;
	int licznik = 0;
	
	ofstream output;
	output.open("output.json");
	
	output << "[\n";
	for(int i=0; i<5; i++){
		cout << "Podaj liczbe: ";
		cin >> a;
		if(a % 2 == 1){
			licznik++;
			x[licznik] = a;
		}
	}
	for(int i=0; i<=licznik; i++){
		output << "{\n \"nieparzysta:\": " << x[i] << "\n},\n";
	}
	output << "]";
	
	cout << "Zapisano!";
	output.close();
	return 0;
}

