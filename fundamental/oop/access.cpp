#include <iostream>

using namespace std;

//example access modifier in c++
class Cth{
	public:
		int x;
	private:
		int y;
	protected:
		int z;
};

int main() {
	Cth mc;
	mc.x = 8;
	cout << mc.x <<endl;
	/**
		kita tdk di ijinkan untuk merubah nilai y dan z karena tidak public;
		mc.y = 10;
		mc.z = 11;
		
	*/
}
