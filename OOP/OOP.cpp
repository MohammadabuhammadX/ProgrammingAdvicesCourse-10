#include <iostream>
#include<string>
using namespace std;

class Person{
private:
	short _userId;
	string _firstName;
	string _lastName;
	string _email;
	string _phoneNumber;

	struct stAddress
	{
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;
	};

public:

	Person(short Id, string firstName, string lastName, string email, string phoneNumber)
	{
		_userId = Id;
		_firstName = firstName;
		_lastName = lastName;
		_email = email;
		_phoneNumber = phoneNumber;
	}

	short getUserId() {

		return _userId;

	}

	void setFirstName(string firstName) {

		_firstName = firstName;
	}

	string getFirstName() {
		return _firstName;
	}

	void setLastName(string lastName) {

		_lastName = lastName;

	}

	string getLastName() {

		return _lastName;

	}

	string getFullName() {

		return _firstName + " " + _lastName;

	}

	void setEmail(string email) {

		_email = email;

	}

	string getEmail() {

		return _email;

	}

	void setPhoneNumber(string phoneNum) {

		_phoneNumber = phoneNum;

	}

	string getPhoneNumber() {

		return _phoneNumber;

	}

	void Print() {
		cout << "\nInfo :" << endl;
		cout << "_____________________________" << endl;
		cout << "User Id : " << _userId << endl;
		cout << "First Name : " << _firstName << endl;
		cout << "Last Name : " << _lastName << endl;
		cout << "Full Name : " << _firstName << " " << _lastName << endl;
		cout << "Email : " << _email << endl;
		cout << "Phone Number : " << _phoneNumber << endl;
		cout << "_____________________________";
	}

	void sendEmail(string subject, string message) {

		cout << "\n\nThe following message sent successfully to email :" << _email << endl;

		cout << "Subject :" << subject << endl;
		cout << "Body :" << message << endl;

	}

	void sendSMS(string message) {

		cout << "\n\nThe following message sent successfully to Phone Number :" << _phoneNumber << endl;

		cout << message << endl;

	}

	stAddress Address;

};

class Employee : public Person {

private:
	string _title;
	float _salary;
	string _department;

public:

	Employee(int Id, string firstName, string lastName, string email, string phone,
		string title, string department, float salary)
		: Person(Id, firstName, lastName, email, phone)
	{
		_title = title;
		_department = department;
		_salary = salary;
	}

	void setTitle(string title) {
		_title = title;
	}

	string getTitle() {
		return _title;
	}

	void setSalary(float salary) {
		_salary = salary;
	}

	float getSalary() {
		return _salary;
	}

	void setDepartment(string department) {

		_department = department;

	}

	string getDepartment() {
		return _department;
	}

	void Print() {
		cout << "\n--- Employee Information ---" << endl;
		cout << "ID: " << getUserId() << endl;
		cout << "Name: " << getFullName() << endl;
		cout << "Email: " << getEmail() << endl;
		cout << "Phone: " << getPhoneNumber() << endl;
		cout << "Title: " << _title << endl;
		cout << "Department: " << _department << endl;
		cout << "Salary: " << _salary << endl;
		cout << "----------------------------" << endl;
	}


};

class Developer : public Employee {

	string _mainProgrammingLanguage;

public:

	Developer(short Id, string firstName, string lastName, string email, string phone, string title, string department,
		float salary, string mainProgrammingLanguage)
		:Employee(Id, firstName, lastName, email, phone, title, department, salary)
	{
		_mainProgrammingLanguage = mainProgrammingLanguage;
	}

	void setMainProgrammingLanguage(string programmingLanguage) {

		_mainProgrammingLanguage = programmingLanguage;

	}

	string getMainProgramminLanguage() {
		return _mainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nInfo:";         cout << "\n___________________";
		cout << "\nID        : " << getUserId();
		cout << "\nFirstName : " << getFirstName();
		cout << "\nLastName  : " << getLastName();
		cout << "\nFull Name : " << getFullName();
		cout << "\nEmail     : " << getEmail();
		cout << "\nPhone     : " << getPhoneNumber();
		cout << "\nTitle     : " << getTitle();
		cout << "\nDepartment: " << getDepartment();
		cout << "\nSalary    : " << getSalary();
		cout << "\nPLanguage : " << getMainProgramminLanguage();
		cout << "\n___________________\n";
	}

};

class clsA
{
private:
	int Var1;
	void Fun1()
	{
		cout << "Function 1";
	}

protected:
	int Var2;  // Now declared — accessible in derived classes
	void Fun2()
	{
		cout << "Function 2";
	}

public:
	// Accessible inside this class, all derived classes, and outside class
	int Var3;
	void Fun3()
	{
		cout << "Function 3";  // Fixed: probably meant Function 3
	}
};

class clsB : public clsA  // Fixed spacing
{
public:
	void Func1()
	{
		cout << clsA::Var2;  // Now valid — Var2 is protected in base class
	}
};

//Abstract class . Interface , Contract.
class Mobile {

public:

	virtual void dial(string PhoneNumber) = 0;//converted to pure virtual funcation.

	virtual void sendSMS(string phoneNumber,string text) = 0;
	
	virtual void takePicture() = 0;

};

class Phone :public Mobile {

	void dial(string phoneNumber) {

	};

	void sendSMS(string phoneNumber, string text) {

	};

	void takePicture() {

	}

};

class clsPerson
{
	string _FullName;

	// Inner class: clsAddress
	class clsAddress
	{
	private:
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;

	public:
		// Constructor
		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_AddressLine2 = AddressLine2;
			_City = City;
			_Country = Country;
		}

		// Setters (Note: should return void, not string)
		void setAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}

		void setAddressLine2(string AddressLine2)
		{
			_AddressLine2 = AddressLine2;
		}

		void setCity(string City)
		{
			_City = City;
		}

		void setCountry(string Country)
		{
			_Country = Country;
		}

		// Getters
		string AddressLine1()
		{
			return _AddressLine1;
		}

		string AddressLine2()
		{
			return _AddressLine2;
		}

		string City()
		{
			return _City;
		}

		string Country()
		{
			return _Country;
		}

		// Print function
		void Print()
		{
			cout << "\nAddress:\n";
			cout << _AddressLine1 << endl;
			cout << _AddressLine2 << endl;
			cout << _City << endl;
			cout << _Country << endl;
		}
	};

public:
	// Getter and Setter for FullName (should be void for setter)
	void setFullName(string FullName)
	{
		_FullName = FullName;
	}

	string FullName()
	{
		return _FullName;
	}

	// Default-initialized Address object
	clsAddress Address;

	// Constructor for clsPerson
	clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
		: Address(AddressLine1, AddressLine2, City, Country) // Use member initializer list
	{
		_FullName = FullName;
		// Address is already initialized via initializer list — no need to reassign
	}
};

int main()
{
	clsPerson Person1("Mohammed Abu-Hadhoud", "Building 10", "Queen Rania Street", "Amman", "Jordan");
	Person1.Address.Print();

	system("pause>0");
	return 0;
}

