class Animal {
private:
	int age;
	string color;
public:

	void set_data(int a, string c) {
		age = a;
		color = c;
	}
	void show_data() {
			cout << "Age: " <<age<<endl;
			cout << "Color: "<<color;
		}
};

int main() {
	Animal cat;
	cat.set_data(5, "Black");
	cat.show_data();
	return 0;

}
