#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*

    *            *
    **          **
    ***        ***
    ****      ****
    *****    *****
    ******  ******
    **************
    **************
    ******  ******
    *****    *****
    ****      ****
    ***        ***
    **          **
    *            *

    */

    int n = 7;

    cout << "\n\n\n\n\n\n\n\n\n";

    for (int i = 0; i < n; i++)
    {
        // UPPER
        for (int j = 0; j <= i; j++)
            cout << "*";
        for (int j = 0; j < 2 * (n - 1) - 2 * i; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // LOWRER
        for (int j = 0; j < n - i; j++)
            cout << "*";
        for (int j = 0; j < 2 * i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        cout << endl;
    }

    cout << "\n\n\n\n\n\n\n\n\n";

    return 0;
}