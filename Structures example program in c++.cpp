#include<iostream>
using namespace std ;
struct score {
	int babar ;
	int shadab ;
	int fakhar ;
};
int main(){
	
	score b ;
	b.babar = 500 ;
	
	cout << "Babar Azam scored "  << b.babar << " runs .\n" ;
	b.shadab = 10 ;
	cout << "Shadab khan took " << b.shadab << " wickets .\n";
	b.fakhar = 18 ;
	cout << "Fakhar zaman hit " << b.fakhar << " sixes . \n" ;
	
	
	return 0 ;
}
