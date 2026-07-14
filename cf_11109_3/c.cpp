#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> array(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }
    if (abs(x - y) % 2 != 0)
    {
        cout << "Yes" << endl;
        return;
    }
    /* now check for atleast one number that cannot be sorted */
    for (int i = 0; i < n; ++i)
    {
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    long long t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
