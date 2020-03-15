#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n, x;
    cin >> n >> x;
    vi v(n), ans(x+1, INF);
    for(int i = 0; i < n; i++) cin >> v[i];
    ans[0] = 0;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - v[j] >= 0)
                ans[i] = min(ans[i-v[j]] + 1, ans[i]);
        }
    }
    if(ans[x] == INF)
        cout << "-1\n";
    else
        cout << ans[x] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
