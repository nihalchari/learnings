#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

    for(int i=0; i<n; i++)
    {
        for(int space = n-i-1; space>0; space++)
        {
            cout << " ";
        }
        for(int asterisk = 0; asterisk<i+1; asterisk++ )
        {
            cout << "#";
        }
        cout <<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
