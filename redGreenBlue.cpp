#include <iostream>

using namespace std;

int main(){
	int kolor = 0x123456;
	cout << "RED: " << hex << ((kolor & 0xff0000) >> 16) << "\n"
	     << "GREEN: " << hex << ((kolor & 0x00ff00) >> 8) << "\n"
     	     << "BLUE: " << hex << ((kolor & 0x0000ff) >> 0);
	
	return 0;
}
