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

vi digits(int n){
    vi op;
    while(n){
        op.PB(n%10);
        n/=10;
    }
    return op;
}

void solve(){
    int n;
    cin >> n;
    vi ans(n+1, INF);
    ans[0] = 0;

    for(int i = 1; i <= n; i++){
        vi op = digits(i);
        for(int j = 0; j < (int)op.size(); j++){
            if( i - op[j] >= 0 )
                ans[i] = min(ans[i], ans[i-op[j]] + 1);
        }
    }
    cout << ans[n] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
