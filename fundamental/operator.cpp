#include <iostream>
using namespace std;

int main() {
	/**
	arithmetic operator 
	+
	-
	/
	*
	%
	++
	--
	*/
	int x = 20;
	int y = 2;
	cout << x + y << endl;
	cout << x - y << endl;
	cout << x / y << endl;
	cout << x * y << endl;
	cout << x % y << endl;
	
	/**
	assignment operator 
	=, +=, -=, *=, /= , %=,
	&=, |=, ^= , >>=, <<=
	
	*/
	cout <<"================="<<endl;
	float z = x += y;
	cout << z << endl;
	z = x -= y;
	cout << z << endl;
	z = x /= y;
	cout << z << endl;
	z = x *= y;
	cout << z << endl;
	z = x %= y;
	cout << z << endl;
	cout <<"================="<<endl;
	z = x &= y;
	cout << z << endl;
	z = x |= y;
	cout << z << endl;
	z = x ^= y;
	cout << z << endl;
	z = x >>= y;
	cout << z << endl;
	z = x <<= y;
	cout << z << endl;
	
	/**
	comparison operator
	==, >= , <= != , >, <
	**/
	cout <<"================="<<endl;
	if(x >= y){
		cout <<"x is greather than y!"<<endl;
	}
	/**
	logical operator 
	&&, ||, !
	*/
	cout <<"================="<<endl;
	bool a = true, b = false;
	bool hasil;
	hasil = a && b;
	cout << hasil <<endl;
	hasil = a || b;
	cout << hasil << endl;
	cout <<(!a) <<endl;
}
