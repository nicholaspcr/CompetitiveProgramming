#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;


ll dp(int pos, int n, ll s1, ll s2, vi &v){
    if(pos == n)
        return abs(s1-s2);
    else{
        ll a = dp(pos+1, n, s1, s2+v[pos], v);
        ll b = dp(pos+1, n, s1+v[pos], s2, v);
        return min(a,b);
    }
}

void solve(){
    int n; cin >> n;
    vi v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
       cin >> v[i];
       sum += v[i];
    }

    cout << dp(0,n,0,0,v) << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
