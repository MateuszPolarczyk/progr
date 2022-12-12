#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

class Strings {
		
	public:
		void reverse_string(string txt);
		void first_big_letter(string txt);
		void letter_counter(string txt);
		void pick_shorter(string txt, string txt2);
		void first_in_dictionary(string txt, string txt2);
};

void Strings::reverse_string(string txt) {	
	reverse(txt.begin(), txt.end());
	cout << txt;
}

void Strings::first_big_letter(string txt) {
	for(int i=0; i<txt.length(); i++) {
		if(isupper(txt[i])) {
			cout << "Indeks: " << i << " Litera: " << txt[i];
			return;
		}
	}
	
}

void Strings::letter_counter(string txt) {
	int counts[26] = {0};
	
	for(int i=0; i<txt.length(); i++) {
		char c = txt[i];
		counts[c - 'a']++;
	}
		
	for(int j=0; j<26; j++) {
		cout << (char)(j + 'a') << ": " << counts[j] << "\n";
	}
	
}

void Strings::pick_shorter(string txt, string txt2) {
	
	int sizeOfTxt = txt.length();
	int sizeOfTxt2 = txt2.length();
	
	if(sizeOfTxt < sizeOfTxt2) {
		cout << "[" << txt << "] jest krotszy";
	} else if(sizeOfTxt2 < sizeOfTxt) {
		cout << "[" << txt2 << "] jest krotszy";
	} else {
		cout << "Dlugosc jest taka sama";
	}
}


void Strings::first_in_dictionary(string txt, string txt2) {
	if(txt.compare(txt2) < 0) {
		cout << txt << " jest wyzej w slowniku niz " << txt2;   
	} else {
		cout << txt2 << " jest wyzej w slowniku niz " << txt;   
	}
}
	
	
int main(int argc, char** argv) {
	Strings s;
	
	int pick = 0;
	string input, input2;
	
	cout << "1. Odwroc napis\n2. Pierwsza duza litera\n3. Licznik liter\n4. Krotszy napis\n5. Pierwszy w slowniku\n";
	cin >> pick;
	switch(pick) {
		case 1:
			cin >> input;
			s.reverse_string(input);
			break;
		case 2:
			cin >> input;
			s.first_big_letter(input);
			break;
		case 3:
			cin >> input;
			s.letter_counter(input);
			break;
		case 4:
			cin >> input;
			cin >> input2;
			s.pick_shorter(input, input2);
			break;
		case 5:
			cin >> input;
			cin >> input2;
			
			s.reverse_string(input, input2)
			break;
		default:
			cout << "Nie ma takiej opcji";
			break;
	}
	return 0;
}
