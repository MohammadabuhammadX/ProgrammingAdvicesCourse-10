#include <iostream>
#include<string>
using namespace std;

class Person {
private:

	string _firstName;

public:

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


int main()
{
	Calculator Calc1;

	Calc1.Clear();
	Calc1.PrintResult();

	Calc1.Add(10);
	Calc1.PrintResult();

	Calc1.Add(100);
	Calc1.PrintResult();

	Calc1.Subtract(20);
	Calc1.PrintResult();


	Calc1.Divide(0);
	Calc1.PrintResult();

	Calc1.Divide(2);
	Calc1.PrintResult();

	Calc1.Multiply(3);
	Calc1.PrintResult();

	Calc1.Clear();
	Calc1.PrintResult();

}

