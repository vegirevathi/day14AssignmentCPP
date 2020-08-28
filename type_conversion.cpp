#include <iostream>
using namespace std;

class Conversion {

public:
	int x, y;
	Conversion (char a, char b) {
		this->x = a;
		this->y = b;
	}
};

int main() {
	Conversion* obj = new Conversion('a', 'b');
	int sum = obj->x + obj->y;
	cout << sum;
}
