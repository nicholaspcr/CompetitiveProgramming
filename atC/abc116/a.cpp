#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


void solve(){
    vi v(3);
    for(int i = 0; i < 3; i++) cin >> v[i];
    sort(all(v));
    int ans = (v[0]*v[1])/2;
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
