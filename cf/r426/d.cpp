#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

vi dp[35001][51];

void fill(int currBox, int currCup, int qtdBoxes, int qtdCups, vi cups){
    if(currCup == qtdCups) return;
    
    auto it1 = lower_bound(all(dp[currCup][currBox]), cups[currCup]);
    if(it1 == dp[currCup][currBox].end() ||  *it1 != cups[currCup])
        dp[currCup][currBox].PB(cups[currCup]);
    fill(currBox, currCup+1, qtdBoxes, qtdCups, cups);
    
    int val = min(qtdBoxes-1, currBox+1);
    auto it2 = lower_bound(all(dp[currCup][val]), cups[currCup]);
    if(it2 == dp[currCup][val].end() || *it2 != cups[currCup])
        dp[currCup][min(qtdBoxes-1, currBox+1)].PB(cups[currCup]);
    fill(currBox+1, currCup+1, qtdBoxes, qtdCups, cups);
}

void solve(){
    int n, k;
    cin >> n >> k;
    vi v(n);
    FOR(i,0,n) cin >> v[i];

    fill(0,0,k,n,v);
    int ans = 0;
    int test = 0;

    for(int i = 0; i < k; i++){
        int best = 0;
        //cout << i << " - > ";
        for(int j = 0; j < n; j++){
            //cout << dp[i][j].size() << " "; 
            sort(all(dp[j][i]));
            auto it = unique(all(dp[j][i]));
            best += it - (dp[j][i].begin());
        }
        //cout << endl;
        ans = max(ans, best);
    }
    cout << ans-2 << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
