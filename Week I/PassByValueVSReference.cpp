/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  28.9.2016
Last revision: 28.9.2016
*/
#include <iostream>

using namespace std;

/*
The following function shows how passing by value works in C++
Note that this is the default behaviour for primitive types.
*/

void swap(int a, int b)
{
	cout << "Values of variables inside the function swap"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;
	int tmp = a;
	a = b;
	b = tmp;

	cout << "Values of variables after swaping"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;
}

/*
The following function shows how passing by reference works in C++
*/

void swap_by_reference(int &a, int &b)
{
	cout << "Values of variables inside the function swap"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;
	int tmp = a;
	a = b;
	b = tmp;

	cout << "Values of variables after swaping"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;
}

int main()
{
	int a = 20;
	int b = 15;
	swap(a, b);
	cout << "Values of variables after calling the swap_by_value function"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;

	swap_by_reference(a, b);
	cout << "Values of variables after calling the swap_by_reference function"
		<< endl
		<< "Variable a=" << a
		<< endl
		<< "Variable b=" << b
		<< endl
		<< endl;
}
