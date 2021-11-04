#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Stats {
	ifstream input;
	
	public:
		void letters();
		
};

void Stats::letters() {
	int sameLetters = 0;
	int sum = 0;
	int i = 0, j;
	int alphabet[26];
	string word;

	
	for(int i=0; i<26; i++) {
		alphabet[i] = 0;
	}

	input.open("tekst.txt");
	if(input.good()) {
		while(!input.eof()) {
			input >> word;

			for(int i=0; i<word.length(); i++) {
				if(word[i] == word[i + 1]) {
					sameLetters++;
					break;
				}
			}
			
			for(int j=0; j<word.length(); j++) {
				alphabet[word[j] - 'A']++;
			}
			sum += word.length();
		}
		
		cout << "73.1: " << sameLetters << "\n";
		cout << "73.2: \n";
		for(i=0; i<26; i++) {
			cout << char('A' + i) << ": " << alphabet[i];
			cout << " (" << fixed << setprecision(2) << 100 * ((double)alphabet[i]/(double)sum) << " %)\n";
		}
	}
}


int main(int argc, char** argv) {
	Stats s;
	s.letters();
	
	return 0;
}
