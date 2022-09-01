/*

Print this pattern

1  2  3  4  5  6  7  7  6  5  4  3  2  1 
1  2  3  4  5  6  *  *  6  5  4  3  2  1
1  2  3  4  5  *  *  *  *  5  4  3  2  1
1  2  3  4  *  *  *  *  *  *  4  3  2  1
1  2  3  *  *  *  *  *  *  *  *  3  2  1
1  2  *  *  *  *  *  *  *  *  *  *  2  1
1  *  *  *  *  *  *  *  *  *  *  *  *  1 

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 7;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " " << j << " ";

        for (int j = 0; j < 2 * i; j++)
            cout << " * ";

        for (int j = n - i; j >= 1; j--)
            cout << " " << j << " ";

        cout << endl;
    }

    return 0;
}
