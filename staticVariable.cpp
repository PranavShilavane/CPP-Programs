#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    static int a;
};

int A::a;

int main()
{
    A s;
    A d;

    s.a = 111;

    cout << "a = " << d.a << endl;
    cout << "a = " << s.a << endl;

    return 0;
}
