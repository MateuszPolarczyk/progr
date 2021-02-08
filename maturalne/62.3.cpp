#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int liczba1, liczba2;
	int identyczne = 0;
	int wieksze = 0;
	
	ifstream file1;
	ifstream file2;
	
	file1.open("liczby1.txt");
	file2.open("liczby2.txt");
	
	for(int i=0; i<1000; i++) {
		file1 >> oct >> liczba1;
		file2 >> dec >> liczba2;
		
		if(liczba1 == liczba2) {
			identyczne++;
		} else if(liczba1 > liczba2) {
			wieksze++;
		}
	}
	
	file1.close();
	file2.close();
	
	cout << "62.3\n"
	     << "Ilosc identycznych par: " << identyczne << "\n"
	     << "Ilosc wiekszych par: " << wieksze << "\n";
	     
	return 0;
}
