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
    int n; cin >> n;
    vi v(n);
    int maxi = 0;
    vi seg;
    for(int i = 0; i < n; i++){
       cin >> v[i];
    }
    
    int ans = 0;
    for(int i = 0; i < n; i ++){
        int tmp = v[i];
        ans += tmp;
        for(int j = i; j < n; j++){
            tmp = min(tmp,v[j]);
            v[j] -= tmp;
        }
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
