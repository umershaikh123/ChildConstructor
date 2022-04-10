#include <iostream>
using namespace std;

class A
{

public:
    int a;
    int b;
    A()
    {
        cout << "A Null constructor invoked"
             << "\n";
    }
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "A parameterized constructor invoked"
             << "\n";

        cout << "a :" << a
             << "\n";

        cout << "b :" << b
             << "\n";
    }
    ~A() {}
};

class B : public A
{

public:
    int d;
    int e;
    B() : A()
    {
        cout << "B Null constructor invoked"
             << "\n";
    }

    B(int d, int e) : A(2, 3)
    {
        this->d = d;
        this->e = e;
        cout << "B parameterized constructor invoked"
             << "\n";
        cout << "d :" << d
             << "\n";

        cout << "e :" << e
             << "\n";
    }

    ~B() {}
};

int main()
{

    B ob1;
    B ob2(5, 5);
    return 0;
}
