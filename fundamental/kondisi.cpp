#include <iostream>

using namespace std;
int main() {
	int data = 80;
	//contoh tenary 
	string hasil = (data <= 50)? "data less than 50" : "data greather than 50";
	cout << hasil <<endl;
	if(data <= 50){
		cout <<"data is less than 50";
	}else if(data > 50 && data <= 75){
		cout <<"data is less than 75 and greather than 50";
	}else{
		cout <<"data greather than 75";
	}

}
