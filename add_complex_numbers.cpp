#include <iostream>
#include <string>

using namespace std;

class Distance {
private:
	int feet;
	float inches;
public:

	void set_data(int f, float i) {
		feet = f;
		inches = i;
	}
	void show_data(Distance d) {
		cout << "Distance: " << endl;
			cout << "Feet: " <<feet<<endl;
			cout << "Inches: "<<inches<<endl;
		}
	Distance add_distance(Distance d) {
		Distance dis;
		dis.feet = feet + d.feet;
		dis.inches = inches + d.inches;
		return dis;
	
	}
};

int main() {
	Distance d1, d2, d3;
	d1.set_data(5, 10.5);
	d2.set_data(6, 2.75);
	//d1.show_data(d1);
	//d2.show_data(d2);
	d3 = d1.add_distance(d2);
	d3.show_data(d3);
	return 0;

}
