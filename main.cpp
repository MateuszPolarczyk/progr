#include <iostream>
#include <string>

using namespace std;

struct film {
    string tytul, rezyser, gatunek;
    int rok;
    double czasTrwania;
};

struct film t[5];
int i;

// <-------- FUNKCJE -------->
void wyzeruj(){
    for(i=0; i<5; i++){
        t[i].tytul = "";
        t[i].rezyser = "";
        t[i].gatunek = "";
        t[i].rok = 0;
        t[i].czasTrwania = 0;
    }
}

void wprowadz(){
int max;
do {
	for(i=0; i<5; i++){

		cout<<string(36, '*')<<" "<<i+1<<" film "<<string(36, '*');

		cout<<"Tytul: ";
		cin>>t[i].tytul;
		
		cout<<"Rezyser: ";
		cin>>t[i].rezyser;
		
		cout<<"Gatunek: ";
		cin>>t[i].gatunek;
		
		cout<<"Rok produkcji: ";
		cin>>t[i].rok;
		
		cout<<"Czas trwania [hh.mm]: ";
		cin>>t[i].czasTrwania;
		
		if(t[i].czasTrwania > t[max].czasTrwania){
			max = i;
		}
	}
	cout<<"Najdluzszy film to: "<<t[max].tytul;
} while (i!=5);
} 

int main(int argc, char** argv) {
    
	wyzeruj();
    	wprowadz();
    
    return 0;
}
