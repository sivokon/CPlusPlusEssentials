#include<iostream>
using namespace std;

int main(void) {
	int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;

	if (x1 >= 0 && x1 <= 255 &&
		x2 >= 0 && x2 <= 255 &&
		x3 >= 0 && x3 <= 255 &&
		x4 >= 0 && x4 <= 255)
		cout << x1 << "." << x2 << "." << x3 << "." << x4;
	else cout << "Error";

	system("pause");
	return 0;
}