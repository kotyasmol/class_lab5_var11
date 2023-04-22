#include "Header.h"
#include "Time.h"
#include <string>
#include <iostream>
using namespace std;
void main()
{
	Time a;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	p->Show();

}