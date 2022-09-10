#include <bits/stdc++.h>
using namespace std;
class First
{
    string name;
    int n;

public:
    First()
    {
        name = "Star";
        n = 111;
        cout << "Hello I am Default Constructor ..." << endl;
    }

    First(First *a)
    {
        cout << "Hello I am Copy Constructor ..." << endl;
        this->name = a->name;
        this->n = a->n;
    }

    First(int n, string name)
    {
        this->name = name;
        this->n = n;
        cout << "Hello I am Parameterised Constructor ..." << endl;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "N : " << n << endl;
    }
};
int main()
{
    cout << "\n\n";

    First a;
    a.show();

    First b(173, "Pranav");
    b.show();

    // First c(b);
    First c = b;
    c.show();

    return 0;
}
