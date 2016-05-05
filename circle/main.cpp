#include<iostream>
#include"circle.h"
using namespace std;
int main()
{
	double r;
	double circle;
	cout << "r:";
	cin >> r;
	circle = area(r);
	cout << "the area of the circle is " << circle << endl;
	return 0;
}