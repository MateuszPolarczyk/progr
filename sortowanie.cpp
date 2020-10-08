#include <iostream>
#include <cstdlib>

using namespace std;

void babelkowe(){
	int t[10] = {5,7,3,1,4,9,8,1,2,6};
	bool sorted = true;
	
	do {
		for(int i=0; i<=9; i++){
			if(t[i] < t[i + 1]){
				int bufor = t[i];
				t[i] = t[i] + 1;
				bufor = t[i + 1];
				sorted = true;
			}
		}	
	}while(!sorted);
	
	for(int i=0; i<10; i++){
		cout << t[i] << ", ";
	}
}

void kubelkowe(){
	// Sortowanie losowo wczytanych liczb
	int k[100];
	int t[1000];
	
	for(int i=0; i<1000; i++){
		t[i] = rand()%100;
	}
	
	for(int i=0; i<100; i++){
		k[i] = 0;
	}
	
	for(int i=0; i<1000; i++){
		k[t[i]]++;
	}
	
	for(int i=0; i<100; i++){
		for(int j=0; j<k[i]; j++) {
			cout << i << ", ";
		}
	}
}

int main(int argc, char** argv) {
	babelkowe();
	kubelkowe();
	return 0;
}
