#include <iostream>

using namespace std;

//example constructor
//constructor is same with method can defined outside class but on this example inside class;
class MyClass{
	public:
		string first_name;
		string last_name;
		int year;
		//bellow is constructor
		MyClass(string first, string last, int x){
			first_name = first;
			last_name = last;
			year = x;
		}
};
int main() {
	MyClass myObj1("alfa", "code", 2020);
	MyClass myObj2("beto", "cokro", 2021);
	
	cout << myObj1.first_name << myObj1.last_name << myObj1.year <<endl;
	cout << myObj2.first_name << myObj2.last_name << myObj2.year <<endl;
}
