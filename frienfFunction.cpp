#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
    double a;

public:
    A()
    {
        cout << "Enter the value of a : ";
        cin >> a;
    }
    friend double add(A, B);
};

class B
{
    double b;

public:
    B()
    {
        cout << "Enter the value of b : ";
        cin >> b;
    }
    friend double add(A, B);
};

double add(A p, B q)
{
    return (p.a + q.b);
}

int main()
{
    A a;
    B b;

    cout << "Addition of two numbers : " << add(a, b);

    return 0;
}
