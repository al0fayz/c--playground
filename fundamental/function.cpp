#include <iostream>
using namespace std;

//contoh function 
void contohFunction() {
	cout <<"hello this is a function" <<endl;
}
void say(string name = "alfa"){
	cout <<"hello " + name <<endl;
}
int kali(int x , int y){
	return x * y;
}
int main() {
	//call function
	contohFunction();
	say("alfa code");
	say();
	
	int hasil = kali(2, 8);
	cout << hasil <<endl;
	return 0;
}
