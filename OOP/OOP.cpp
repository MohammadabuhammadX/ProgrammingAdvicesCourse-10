#include <iostream>
#include<string>
using namespace std;

class Person {
private:

	string _firstName;

public:

	string fullName;

	Person()
	{
		fullName = "Mohammad Abu hammad ";
		cout<<"\nHi,I'm Ctor";
	}

	~Person() {
		cout << "\nHi, I'm Destrouctor";
	}
	void setFirstName(string FirstName) {

		_firstName = FirstName;

	}

	string getFirstName() {

		return _firstName;

	}

	__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

};

class Calculator {

private:

	float _result = 0;
	float _lastNumber = 0;
	string _lastOperation = "Clear";
	float _preivousResult = 0;

	bool _isZero(float num)
	{
		return (num == 0);
	}

public:

	void Add(float num) {

		_lastNumber = num;
		_preivousResult = _result;
		_lastOperation = "Adding";
		_result += num;

	}

	void Subtract(float num) {
		_lastNumber = num;
		_preivousResult = _result;
		_lastOperation = "Subtracting";
		_result -= num;
	}

	void Divide(float num) {

		_lastNumber = num;

		if (_isZero(num)) {
			num = 1;
		}
		_preivousResult = _result;
		_lastOperation = "Dividing";
		_result /= num;

	}
	void Multiply(int num) {

		_lastNumber = num;
		_lastOperation = "Multiplying";
		_preivousResult = _result;
		_result *= num;

	}

	float GetFinalReuslts() {

		return _result;

	}

	void Clear() {

		_lastNumber = 0;
		_preivousResult = 0;
		_lastOperation = "Clear";
		_result = 0;

	}

	void CancelLastOperation() {

		_lastNumber = 0;
		_lastOperation = "Cancelling Last Operation";
		_result = _preivousResult;

	}

	void PrintResult() {

		cout << "Result ";
		cout << "After " << _lastOperation << " " << _lastNumber << " is : " << _result << "\n";
	}

};

class Address {

private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZIPCode;
public:

	Address(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZIPCode = ZipCode;
	}
	//Copy Constructor
	/*Address(Address& old_obj)
	{
		_AddressLine1 = old_obj.GetAddressLine1();
		_AddressLine2 = old_obj.GetAddressLine2();
		_POBox = old_obj.GetPOBox();
		_ZIPCode = old_obj.GetZipCode();
	}*/

	void SetAddressLin1(string AddressLine1) {
		_AddressLine1 = AddressLine1;
	}

	string GetAddressLine1() {
		return _AddressLine1;
	}

	void SetAddressLine2(string AddressLine2) {
		_AddressLine2 = AddressLine2;
	}

	string GetAddressLine2() {
		return _AddressLine2;
	}

	void SetPOBox(string POBox) {
		_POBox = POBox;
	}

	string GetPOBox() {
		return _POBox;
	}

	void SetZipCode(string ZipCode) {
		_ZIPCode = ZipCode;
	}

	string GetZipCode() {
		return _ZIPCode;
	}

	void Print() {

		cout << "\nAddress Details: \n";
		cout << "-----------------------------";
		cout << "\nAddressLine1 : " << _AddressLine1 << endl;
		cout << "AddressLine2 : " << _AddressLine2 << endl;
		cout << "POBox	     : " << _POBox << endl;
		cout << "ZipCode	     : " << _ZIPCode << endl;

	}
};

class ClsA {


public:
	int var;

	static int counter;
	ClsA()
	{
		counter++;
	}
	void Print() {

		cout << "\nvar     =" << var << endl;
		cout << "counter  =" << counter << endl;

	}
};

int ClsA::counter = 0; //static variable initalisation outside the class.

int main()
{
	ClsA a ,a1, a2;

	a.var = 10;
	a1.var = 20;
	a2.var = 30;
	
	a.Print();
	a1.Print();
	a2.Print();

	/*a1.counter = 500;
	cout << "\nAfter chaning the static memeber counter in one object: \n";

	a.Print();
	a1.Print();
	a2.Print();*/
	system("pause>0");
};

