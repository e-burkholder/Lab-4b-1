#include <iostream>
using namespace std;
int main() {
	int temp;
	string tempUnit;

	cout << "Please enter temperature value and unit: ";
	cin >> temp >> tempUnit;

	if (tempUnit == "C" || tempUnit == "c")
	{
		if (temp < 0)
		{
			cout << "Water is a solid at that temperature.";
		}
		else if (temp == 0)
		{
			cout << "Water is a solid.";
		}
		else if (temp > 0 && temp < 100)
		{
			cout << "Water is a liquid.";
		}
		else if (temp == 100)
		{
			cout << "Water is a liquid and a gas";
		}
		else if (temp > 100)
		{
			cout << "Water is a gas.";
		}
	}
	else if (tempUnit == "F" || tempUnit == "f")
	{
		if (temp < 32)
		{
			cout << "Water is a solid at that temperature.";
		}
		else if (temp == 32)
		{
			cout << "Water is a solid.";
		}
		else if (temp > 32 && temp < 212)
		{
			cout << "Water is a liquid.";
		}
		else if (temp == 212)
		{
			cout << "Water is a liquid and a gas";
		}
		else if (temp > 212)
		{
			cout << "Water is a gas.";

		}


		return 0;
	}
	else if (cin.fail()) {
		cout << "Please enter an integer and unit (C or F)";
	}

	return 0;
}