#include <bits/stdc++.h>
using namespace std;

int Max(int *arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = Max(arr, n);
    cout << maxi << endl;
}