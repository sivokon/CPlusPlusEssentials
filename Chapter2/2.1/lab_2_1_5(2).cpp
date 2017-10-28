#include <iostream>
using namespace std;

int main(void) {

	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: \n";
	cin >> grossprice;
	cout << "Enter a tax rate: \n";
	cin >> taxrate;

	netprice = grossprice / (1 + taxrate/100);
	taxvalue = grossprice - netprice;

	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;

	system("pause");
	return 0;
}