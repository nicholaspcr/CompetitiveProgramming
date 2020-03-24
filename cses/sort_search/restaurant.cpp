#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

bool cmp(pi a, pi b){
    if(a.S == b.S)
        return a.F < b.F;
    return a.S < b.S;
}

void solve(){
    int n; cin >> n;
    vector<pi> v(n);
    map<int,int> m;
    for(int i = 0 ; i < n; i++){
        cin >> v[i].F >> v[i].S;
        m[v[i].F]++;
        m[v[i].S]--;
    }
    int ans = 0;
    int best = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        best += it->S;
        ans = max(ans, best);
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
