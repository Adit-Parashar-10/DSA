#include <iostream>
using namespace std;

int lowerBound(int arr[], int s, int e, int k)
{
    int res = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] <= k)
        {
            res = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "enter the value of elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "enter the value for lower bound:";
    cin >> k;

    int s = 0, e = n - 1;

    int ans = lowerBound(arr, s, e, k);

    cout << "lower bound for element " << k << " is found at index:" << ans << endl;

    return 0;
}