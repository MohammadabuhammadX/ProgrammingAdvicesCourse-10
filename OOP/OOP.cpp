#include <iostream>
#include<string>
using namespace std;

class Person {
private:

	int _userId = 1;

	string _firstName;
	string _lastName;

public:

	int getUserId() {

		return _userId;

	}

	void setFirstName(string FirstName) {

		_firstName = FirstName;

	}

	string firstName() {

		return _firstName;

	}

	void setLastName(string LastName) {

		_lastName = LastName;

	}

	string getLastName() {

		return _lastName;

	}

	string getFullName() {

		return _firstName + _lastName;

	}

};


int main()
{

	Person Person1 , Person2;
	
	Person1.setFirstName("Mohammad");
	Person1.setLastName(" AbuhMammad");


	cout << "User Id : " << Person1.getUserId() << endl;
	cout << "First Name : " << Person1.firstName() << endl;
	cout << "Last Name : " << Person1.getLastName() << endl;
	cout << "Full Name : " << Person1.getFullName() << endl;
}

