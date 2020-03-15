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
    ll n, a, b;
    cin >> n >> a >> b;
    ll op = a + b;

    ll ans = n/(op) * a;
    ans += min(n%op, a);


    cout << ans << endl;
}


int main(){
    //int t; cin >> t;
    //while(t--) solve();
    solve();
    return 0;
}
