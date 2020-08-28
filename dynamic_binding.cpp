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


int main()
{
	Father father, *obj;
	Son son;
	Daughter daughter;

	obj = &father;
	obj->property();

	obj = &son;
	obj->property();

	obj = &daughter;
	obj->property();

	return 0;
}
