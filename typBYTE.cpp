#include <iostream>
#include <bitset>

using namespace std;

string dec2bin(int x) {
	int d;
	string znak;
	if (x > 0) {
		d = x;
		znak = "";
	} else {
		d = x * -1;
		znak = "-";
	}
	
	string binary = bitset<8>(d).to_string();
	binary.erase(0, min(binary.find_first_not_of('0'), binary.size()-1));
	binary = znak + binary;
	
	return binary;
}

int main(int argc, char** argv) {

    int a, b;
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    string binaryA=dec2bin(a);
    string binaryB=dec2bin(b);
    string a_and_b_bin = dec2bin((a & b));
    string a_or_b_bin = dec2bin((a | b));
    string a_xor_b_bin = dec2bin((a ^ b));
    

	  cout << "Dwojkowe A: " << binaryA << "\n";
	  cout << "Dwojkowe B: " << binaryB << "\n";
    
    cout << "A & B: " << a_and_b_bin << "\n";
    cout << "A | B: " << a_or_b_bin << "\n";
    cout << "A ^ B: " << a_xor_b_bin << "\n";

	  cout << "Negacja bitowa A: " << ( ~a ) << "\n"; 
	  cout << "Negacja logiczna A: "<< ( !a ) << "\n";
	
	  cout << "Negacja bitowa B: " << ( ~b ) << "\n"; 
	  cout << "Negacja logiczna B: " << ( !b ) << "\n";

    return 0;
}
