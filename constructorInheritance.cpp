#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Hello I am constructor of class A" << endl;
    }
};

class B : A
{
public:
    B()
    {
        cout << "Hello I am constructor of class B" << endl;
    }
};
int main()
{
    B a;

    return 0;
}
