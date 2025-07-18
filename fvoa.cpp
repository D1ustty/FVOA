#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int x, y, m;
float r, r2, r3, y2;
int main(){
	cout << "enter the number of years: ";
	cin >> y;
	cout << "enter the amount of money: ";
	cin >> m;
	y = y * 12;
	y2 = y;
	cout << "enter the annual interest rate as a decimal: ";
	cin >> r;
	r2 = r / 12, r3 = pow((r2 + 1),y2), r3 = (r3 - 1)/r2;
	x = r3 * m;
	cout << x;
	return 0;
}
