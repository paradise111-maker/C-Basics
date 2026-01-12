#include <iostream>
#include <string>

using namespace std;

class Complex {
private:
	int x, y;

public:
	Complex() {
		x = 0;
		y = 0;
	}

	Complex(int a, int b) {
		x = a;
		y = b;
	}

	Complex(int a) {
		x = a;
		y = 0;
	}

	void show_Data() {
		cout << "Real: " << x << "\t Imaginiary: " << y<<endl;
	}


};
	int main() {
		Complex c1();
		Complex c2(2, 3);
		Complex c3(4);

		c2.show_Data();
		c3.show_Data();

		
	}
