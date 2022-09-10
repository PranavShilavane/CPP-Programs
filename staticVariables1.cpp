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

    s.a = 10;

    cout << A::a << endl;
    cout << s.a << endl;
    cout << d.a << endl;

    return 0;
}
