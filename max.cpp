#include <iostream>

using namespace std;

void max() {
	int max, max2, t[10];
	
	for(int i=0; i<10; i++){
		cout << "Podaj liczbe (" << i + 1 << "): ";
		cin >> t[i];
		if(t[0] < t[1]) {
			max = t[1];
			max2 = t[0];
		} else {
			max = t[0];
			max2 = t[1];
		}
	}
	
	for(int i=0; i<10; i++) { 
		if(t[i] > max){
			max2 = max;
			max = t[i];
		} else
		if(t[i] > max2 && t[i] != max){
			max2 = t[i];
		}
	}
	
	cout << "\nMAX: " << max << "\nMAX2: " << max2;
}

void min() {
	int min, min2;
	
	int t[10];
	
	for(int i=0; i<10; i++){
		cout << "Podaj liczbe (" << i + 1 << "): ";
		cin >> t[i];
		if(t[0] < t[1]) {
			min = t[0];
			min2 = t[1];
		} else {
			min = t[1];
			min2 = t[0];
		}
	}

	for(int i=0; i<10; i++) { 
		if(t[i] < min){
			min2 = min;
			min = t[i];
		} else
		if(t[i] < min2){
			min2 = t[i];
		}
	}
	
	cout << "\nMIN: " << min << "\nMIN2: " << min2;
}

int main() {
	int wybor;
	cout << "[1] Druga najwieksza \n[2] Druga najmniejsza\nWybor: ";
	cin >> wybor;
	
	switch(wybor){
		case 1:
			max();
			break;
		case 2:
			min();
			break;
		default:
			cout << "Brak";
	}
	
	return 0;
}
