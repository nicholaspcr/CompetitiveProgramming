#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vi v(n);
    map<int,ll> m;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i] - i] += v[i];
        if(v[i] > ans) ans = (ll)v[i];
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->S > ans) ans = it->S;
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
