#include <iostream>
using namespace std;

int main() {
	//contoh while
	int a = 0;
	while(a <= 5){
		cout << a;
		a++;
	}
	
	//contoh do while
	int i = 10;
	do{
		cout << i <<endl;
		i--;
	}while(i > 1);
	
	
	//contoh for 
	for(int B = 0; B <= 10; B++){
		//contoh continue
		if(B == 3){
			continue;
		}
		if(B == 8){
			break;
		}
		cout << B <<endl;
	}
}
