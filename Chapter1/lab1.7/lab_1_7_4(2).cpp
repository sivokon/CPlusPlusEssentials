#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cout << "Input two numbers:" << endl;
	cin >> a >> b;

	if (1./a == 1./b) cout << "Results are equal" << endl;
	else cout << "Results are NOT equal" << endl;

	system("pause");
	return 0;
}