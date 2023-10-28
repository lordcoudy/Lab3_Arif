
#include <iostream>

using namespace std;
int main() {
	float R1, R11, R21;
	double R2, R12, R22;
	R11 = R21 = 0.0f;
	R12 = R22 = 0.0;
	R1 = 1 / (1 / R11 + 1 / R21);
	cout << "R for float = " << R1 << endl;
	float R3 = R11 * R21 / (R11 + R21);
	cout << "Equivalent R = " << R3 << endl << endl;
	R2 = 1 / (1 / R12 + 1 / R22);
	cout << "R for double = " << R2 << endl;
	double R4 = R12 * R22 / (R12 + R22);
	cout << "Equivalent R = " << R4 << endl << endl;
	R11 = R12 = 1.0f;
	R21 = R22 = -0.0;
	R1 = 1 / (1 / R11 + 1 / R21);
	cout << "R for float with R1 = "<< R11<< " and R2 = "<< R21<< ": " << R1 << endl;
	cout << "Equivalent R = " << R3 << endl << endl;
	R2 = 1 / (1 / R12 + 1 / R22);
	cout << "R for double with R1 = " << R12 << " and R2 = " << R22 << ": " << R2 << endl;
	cout << "Equivalent R = " << R4 << endl << endl;
	R11 = R12 = 0.0f;
	R21 = R22 = -0.0;
	R1 = 1 / (1 / R11 + 1 / R21);
	cout << "R for float with R1 = " << R11 << " and R2 = " << R21 << ": " << R1 << endl;
	cout << "Equivalent R = " << R3 << endl << endl;
	R2 = 1 / (1 / R12 + 1 / R22);
	cout << "R for double with R1 = " << R12 << " and R2 = " << R22 << ": " << R2 << endl;
	cout << "Equivalent R = " << R4 << endl << endl;
	cout << "----------------------------------"<< endl;
}
