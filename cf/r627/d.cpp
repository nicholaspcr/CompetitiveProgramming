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
    vi a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vi op(n);
    for(int i = 0; i < n; i++) op[i] = a[i] - b[i];
    sort(op.begin(), op.end());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(op[i] > 0){
            auto it = lower_bound(op.begin(), op.end(),(-1) * op[i] + 1);
            ans += i - (it - op.begin());
        }
    }
    cout << ans << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
