#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr)
{
    long minSum = 0, maxSum = 0;
    long minVal = arr[0], maxVal = arr[0];
    int i = 1;

    while (i < 5)
    {
        if (maxVal <= arr[i])
        {
            minSum = minSum + maxVal;
            maxVal = arr[i];
        }
        else
        {
            minSum = minSum + arr[i];
        }

        if (minVal >= arr[i])
        {
            maxSum = maxSum + minVal;
            minVal = arr[i];
            cout << maxSum << endl;
        }
        else
        {
            maxSum = maxSum + arr[i];
            cout << maxSum << endl;
        }
        i++;
    }

    cout << minSum << " " << maxSum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    miniMaxSum(arr);
    return 0;
}
