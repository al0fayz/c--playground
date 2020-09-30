#include <iostream>

using namespace std;

int main() {
	//contoh array
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	int myNum[3] = {10, 20, 30};
	cout <<cars[0] <<endl;
	
	//ganti data
	cars[0] = "Opel";
	
	//loops on array
	for(int a = 0; a < 4; a++){
		cout << cars[a] <<endl;
	}
}
