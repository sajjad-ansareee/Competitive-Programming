#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long x, y; cin>>x>>y;
    if (x<y) {
        cout<<"NO"<<endl;
        return;
    }
    else {
        if (x%y==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
