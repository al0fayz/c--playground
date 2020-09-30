#include <iostream>
using namespace std;

int main() {
	//contoh reference di c++
	//contoh di bawah ini adalah contoh reference ke variabel (&)
	string food = "Pizza";  // food variable
	string &meal = food;    // reference to food
	cout << food << "\n";  // Outputs Pizza
	cout << meal << "\n";
	
	//contoh reference ke memory address
	string makanan = "Pizza";

	cout << &makanan;
}
