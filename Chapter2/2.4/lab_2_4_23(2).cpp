#include <iostream>
#include <bitset> 
using namespace std;
int main(void) {

	unsigned short int val;
	bool ispalindrome = true;
	cout << "value = ";
	cin >> val;

	int counter = 15;
	unsigned short a = 1, b = 1;

	for (int i = 0; i < counter; i++) {
		a = a << i;
		b = b << counter;
		if (((val & a) && (val & b)) || (!(val & a) && !(val & b))) {
			a = 1;
			b = 1;
			counter--;
		}
		else {
			ispalindrome = false;
			break;
		}
	}

	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;

	system("pause");
	return 0;
}
//a = 1; b = 1;
//a = a << 1;
//bitset<16> bitset3{ a };   // the bitset representation of 4  
//cout << bitset3 << endl;
//b = b << 14;
//bitset<16> bitset4{ b };   // the bitset representation of 4  
//cout << bitset4 << endl << endl;

//a = 1; b = 1;
//a = a << 2;
//bitset<16> bitset5{ a };   // the bitset representation of 4  
//cout << bitset5 << endl;
//b = b << 13;
//bitset<16> bitset6{ b };   // the bitset representation of 4  
//cout << bitset6 << endl << endl;

//a = 1; b = 1;
//a = a << 3;
//bitset<16> bitset7{ a };   // the bitset representation of 4  
//cout << bitset7 << endl;
//b = b << 12;
//bitset<16> bitset8{ b };   // the bitset representation of 4  
//cout << bitset8 << endl << endl;

//a = 1; b = 1;
//a = a << 4;
//bitset<16> bitset9{ a };   // the bitset representation of 4  
//cout << bitset9 << endl;
//b = b << 11;
//bitset<16> bitset10{ b };   // the bitset representation of 4  
//cout << bitset10 << endl << endl;

//a = 1; b = 1;
//a = a << 5;
//bitset<16> bitset11{ a };   // the bitset representation of 4  
//cout << bitset11 << endl;
//b = b << 10;
//bitset<16> bitset12{ b };   // the bitset representation of 4  
//cout << bitset12 << endl << endl;

//a = 1; b = 1;
//a = a << 6;
//bitset<16> bitset13{ a };   // the bitset representation of 4  
//cout << bitset13 << endl;
//b = b << 9;
//bitset<16> bitset14{ b };   // the bitset representation of 4  
//cout << bitset14 << endl << endl;

//a = 1; b = 1;
//a = a << 7;
//bitset<16> bitset15{ a };   // the bitset representation of 4  
//cout << bitset15 << endl;
//b = b << 8;
//bitset<16> bitset16{ b };   // the bitset representation of 4  
//cout << bitset16 << endl << endl;

//a = 1; b = 1;
//a = a << 8;
//bitset<16> bitset17{ a };   // the bitset representation of 4  
//cout << bitset17 << endl;
//b = b << 7;
//bitset<16> bitset18{ b };   // the bitset representation of 4  
//cout << bitset18 << endl << endl;