#include <iostream>

using namespace std;

int t[521];
char tablicaDobra;
int mnoznik = 2;


int main(int argc, char** argv) {
	for(int i=0; i<=521; i++){
		t[i] = i * mnoznik;
	}
	for(int i=520; i>=0; i--){
		cout<<t[i];
		if(i>0){
			cout<<",";
		}
	}
	return 0;
}
