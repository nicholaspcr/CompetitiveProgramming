#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define INF 0x3f3f3f3f


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll maxi = 0;
    vector<ll> ans(n);
    for(int i = 0 ; i < n; i++){
        ans[i] = maxi + v[i];
        maxi = max(maxi,ans[i]);
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
