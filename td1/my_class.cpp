#include <iostream>
#include "my_class.h"
using namespace std;

MyClass::MyClass():
myString("")
{
}

MyClass::MyClass(const string& s):
myString(s)
{
}

void MyClass::print_my_element() const {
    cout << myString << endl;
}
