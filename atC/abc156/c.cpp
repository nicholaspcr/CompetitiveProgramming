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
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 10000000;
    for(int i=0; i<100; i++){
        int op = 0;
        for(int j = 0; j < n; j++){
            op += (v[j] - i)*(v[j] - i);
        }
        ans = min(ans,op);
    }
    cout << ans << endl;
}

int main(){
    /*
    int t; cin >> t;
    while(t--) solve();
    */
    solve();
    return 0;
}
