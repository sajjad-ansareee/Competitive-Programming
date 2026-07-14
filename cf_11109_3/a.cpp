#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<char> str(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> str[i];
    }
    int longest = 0;
    int current = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '#')
        {
            current += 1;
        }
        else
        {
            longest = max(longest, current);
            current = 0;
        }
    }
    longest = max(longest, current);
    int time = longest / 2;
    if (longest % 2 == 0)
    {
        cout << time << endl;
    }
    else
    {
        cout << time + 1 << endl;
    }
    return;
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
