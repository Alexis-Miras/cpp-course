#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>
using namespace std;

class MyClass {
    private:
        string myString;
    public:
        MyClass();
        virtual ~MyClass() = default;
        MyClass(const string& s);
        void print_my_element() const;
};

#endif
