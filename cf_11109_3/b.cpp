#include <bits/stdc++.h>

using namespace std;

void solve()
{
    /* sum of first n positive natural numbers */
    int n;
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    // cout << sum << endl;
    vector<int> array(n, 0);
    int actual_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
        actual_sum += array[i];
    }
    if (actual_sum < sum)
    {
        cout << "No" << endl;
        return;
    }
    int extra = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (array[i - 1] > i)
        {
            extra += array[i - 1] - i;
            array[i - 1] = i;
        }
        else if (array[i - 1] < i)
        {
            /* check if we can make it to desired number */
            if (i - array[i - 1] <= extra)
            {
                array[i - 1] = i;
                extra = extra - (array[i - 1] - i);
            }
            else
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {
        // cout << array[i] << " ";
        if (array[i] >= array[i + 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    // cout << endl;
    cout << "Yes" << endl;
}

int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
