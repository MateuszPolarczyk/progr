#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;

class Zad {
	
	ifstream file;
	int uniformCount = 0;
	public:
		bool uniform(string s);
		void result();
		Zad();
		~Zad();
};

Zad::Zad() {
	string napis_1;
	string napis_2;
	
	file.open("dane.txt");
	if(file.good()) {
		while(!file.eof()) {
			file >> napis_1;
			file >> napis_2;
			if(uniform(napis_1) && uniform(napis_2)) {
				if(napis_1[1] == napis_2[1]) {
					if(napis_1.length() == napis_2.length()) {
						uniformCount++;
					}
				}
			}
		}
	}
}

Zad::~Zad() {
	file.close();
}

bool Zad::uniform(string s) {
	char first = s[0];
	
	for(int i=1; i<s.length(); i++) {
		if(first != s[i]) {
			return false;
		}
	}
	
	return true;
}

void Zad::result(){
	cout << "Jednolitych: " << uniformCount;
}


int main(int argc, char** argv) {
	Zad z;
	z.result();
	return 0;
}
