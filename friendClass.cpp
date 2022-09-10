#include <bits/stdc++.h>
using namespace std;
class Second;
class First
{
    string name;
    friend Second;

public:
    First(string name)
    {
        this->name = name;
    }
};

class Second
{

public:
    void showName(First s)
    {
        cout << "Name : " << s.name << endl;
    }
};

int main()
{
    First a("Pranav");
    Second b;

    b.showName(a);

    return 0;
}
