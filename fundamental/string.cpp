#include <iostream>
using namespace std;

int main() {
	//contoh string
	string hello = "hello world";
	cout << hello << endl;
	
	//penggabungan string 
	string first_name = "alfa", last_name = "code";
	cout <<"hello "+ first_name + " " + last_name << endl;
	
	//atau dapat menggunakn append();
	string full_name = first_name.append(last_name);
	cout <<"hello " << full_name << endl;
	
	//string length => length() and size()
	
	cout << full_name.length() << endl;
	cout << full_name.size() << endl;
	
	//Access string
	cout <<first_name[0] <<endl;
	
	//user input
	string name;
	cout <<"what is name?" << endl;
	cin >> name;
	cout <<"your name is "<<name <<endl;
	string job;
	cout <<"what is your job?" << endl;
	getline(cin, job);
	cout <<"your job is" <<job<<endl;
}
