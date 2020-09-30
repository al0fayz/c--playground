#include <iostream>
using namespace std;

//contoh encapsulation pada c++
//atau pembungkusan maksudnya adalah bebrapa data harus di hidden , harus menggunakan method tertentu untuk mengaksesnya

class Employe{
	public:
		string name;
	private:
		int salary;
		
	public:
		int setSalary(int s){
			salary = s;
		}
		int getSalary(){
			return salary;
		}
};

int main() 
{
	Employe emp;
	emp.name = "alfa";
	emp.setSalary(2000);
	cout << emp.name << emp.getSalary() <<endl;
}
