#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Hello my name is Megan and I'm going to solve the equation: AX+B=0 for X.\n";


	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "A=" << A << endl;

	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "B=" << B << endl;

	cout << "Solving for X...";

	if (A != 0) {

		X = -B / A;
	}

	cout << "The answer is X=" << X << endl;

}
