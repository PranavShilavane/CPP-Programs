#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }

    /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << i << " ";
        cout << endl;
    }

    /*
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    */

    int count = 1;
    // int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << count++ << " ";
        cout << endl;
    }

    /*
    1 2 3
    4 5 6
    7 8 9
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    /*

     *
     * *
     * * *

     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << i << " ";
        cout << endl;
    }

    /*
    1
    2 2
    3 3 3
    */

    // int n = 4, count = 1;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j++ <= i)
        {
            cout << count++ << " ";
        }
        cout << endl;
        i++;
    }

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    // int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << i + j << " ";
        cout << endl;
    }

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }

    /*
    1
    2 1
    3 2 1
    4 3 2 1
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << char('A' + i) << " ";
        cout << endl;
    }

    /*
    A A A A
    B B B B
    C C C C
    D D D D
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << char('A' + j) << " ";
        cout << endl;
    }

    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */

    // int n = 4;
    count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << char('A' + count++) << " ";
        cout << endl;
    }

    /*
    A B C D
    E F G H
    I J K L
    M N O P
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << char('A' + i) << " ";
        cout << endl;
    }

    /*
    A
    B B
    C C C
    D D D D
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << char('A' + count++) << " ";
        cout << endl;
    }

    /*
    A
    B C
    D E F
    G H I J
    */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << char('A' + n - i + j) << " ";
        cout << endl;
    }

    /*
    D
    C D
    B C D
    A B C D
    */

    // int n = 4;
    count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << char('A' + +i + j) << " ";
        cout << endl;
    }

    /*
    A B C D
    B C D E
    C D E F
    D E F G
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "   ";
        for (int j = 0; j <= i; j++)
            cout << " * ";
        cout << endl;
    }

    /*
     *
     **
     ***
     ****
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }

    /*

    * * * *
    * * *
    * *
    *

    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << " ";

        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    /*
    ****
    ***
    **
    *
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 0; j <= n - i; j++)
            cout << i;

        cout << endl;
    }

    /*
    1111
     222
      33
       4
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = i - 1; j >= 1; j--)
            cout << j;
        cout << endl;
    }

    /*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1

    */

    return 0;
}