#include <iostream>
using namespace std;

int main() {
	//A pointer however, is a variable that stores the memory address as its value.
	string food = "ayam goreng"; //variabel type string
	string* ptr = &food;	//A pointer variable, with the name ptr, that stores the address of food
	
	cout << food <<endl; //ayam goreng
	cout << &food <<endl; //0x6ffdf0
	cout << ptr <<endl; //0x6ffdf0
	cout << *ptr <<endl; //ayam goreng
	
	//kita bisa mengubah value variabel food dengan mengakses langsung reference pointer
	*ptr = "soto bakar";
	cout << *ptr <<endl;
	cout << food <<endl;
}
