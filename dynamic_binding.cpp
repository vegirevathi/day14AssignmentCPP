#include <iostream>
using namespace std;

class Father {

public:
	virtual void property() {
		cout << "Property belongs to father" << endl;
	}
};

class Son:public Father {

public:
	void property() {
		cout << "Property belongs to son" << endl;
	}
};

class Daughter:public Father {

public:
	void property() {
		cout << "Property belongs to daughter" << endl;
	}
};

void property(Father *f) {
	(*f).property();
}

int main()
{
	Son s;
	Daughter d;
	property(&s);
	property(&d);

	return 0;
}
