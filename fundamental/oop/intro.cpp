#include <iostream>
using namespace std;

//example oop in c++

class Siswa{
	public:
		string name;
		string address;
		int age;
		int year(int y);
		//method inside class
		void say(){
			cout <<"hello from method"<<endl;
		}
};

//example method outside class
int Siswa::year(int y){
	return y;
}
int main() {
	//create object 
	Siswa sw;
	sw.name = "Beta gama";
	sw.address = "jakarta";
	sw.age = 19;
	
	//create another object from Siswa
	Siswa alfa;
	alfa.name = "Alfa code";
	alfa.address = "Pemalang";
	alfa.age = 20;
	
	cout << sw.name << sw.address << sw.age <<endl;
	sw.say();
	cout << alfa.name << alfa.address << alfa.age <<endl;
	cout << alfa.year(2020)<<endl;
}
