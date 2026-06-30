#include <bits/stdc++.h>

using namespace std;

bool check_good(long long n) {
    string s=to_string(n);
    int count=0;
    vector<bool> hash(10, false);
    for (int i=0; i<s.size(); ++i) {
        if (hash[s[i]-'0']==false) {
            count+=1;
            hash[s[i]-'0']=true;
        }
    }
    if (count<=2) {
        return true;
    }
    else {
        return false;
    }
}

void solve() {
    long long x; cin>>x;
    for (long long y=2; y<INT_MAX; ++y) {
        if (check_good(y)) {
            if (check_good(y*x)) {
                cout<<y<<endl;
                return;
            }
        }
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        solve();
    }

    // int a=1000;
    // string s=to_string(a);
    // cout<<s<<endl;
    // cout<<typeid(s).name()<<endl;
    return 0;
}
