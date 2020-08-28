#include <iostream>
using namespace std;

class ClassRoom {
public:
	string teachers;
	string boys;
	string girls;

	ClassRoom(string t, string b, string g)
	{
		this->teachers = t;
		this->boys = b;
		this->girls = g;
	}

	void display()
	{
		cout << "Teacher: " << teachers << " Boys: " << boys << " Girls: " << girls << endl;
	}
};

class Girls {

public:
	string girls;

	Girls(ClassRoom& classRoom)
	{
		this->girls = classRoom.girls;
	}

	void display()
	{
		cout << "Girls: " << girls << endl;
	}
};


int main()
{
	ClassRoom classRoom("Rani", "Rakshit", "Rajini");
	classRoom.display();

	Girls girls = classRoom;
	girls.display();
}
