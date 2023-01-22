#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	cout << "INFINITY" << " to Double = " << atof("INFINITY") << endl;
	cout << "Inf" << " to Double = " << atof("Inf") << endl;

	cout << "Nan" << " to Double = " << atof("Nan") << endl;
	cout << "NAN" << " to Double = " << atof("NAN") << endl;

	_getch();
	return 0;
}