#include <iostream>
#include <string>

using namespace std;

class Account {
	private:
		float balance;
		static float roi;
public:
	void set_balance(float bal) {
		balance = bal;
	}
	void show_balance() {
		cout << "Balance: " << balance << endl;
		cout << "ROI: " << roi << endl;
	}

	static void set_roi(float r) {
		roi = r;
	}
	
};

float Account::roi = 3.5;

int main() {
	Account a1, a2;
	a1.set_balance(1000);
	a1.show_balance();
	Account::set_roi(4.5);
	a1.show_balance();
	return 0;
}
