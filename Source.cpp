//Source.cpp
#include <iostream>
#include "Money.h"
using namespace std;

int main() {
	Money m;
	int x, y;
	cout << "Par?";
	cin >> x;
	cout << "Numberofbills?";
	cin >> y;
	m.SetPar(x);
	m.SetNumberofbills(y);

	try
	{
		cout << "sum = " << m.sum();
	}
	catch (const int ex)
	{
		cerr << "The par cannot be zero or less." << endl;
	}
	catch (const double ex)
	{
		cerr << "The numberofbills cannot be zero or less." << endl;
	}
	return 0;
}
