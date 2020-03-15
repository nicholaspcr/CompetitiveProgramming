#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> pi;

template <typename T> void max_self(T& a, T b){
    a = max(a,b);
}

void solve(){
    string a, b;
    cin >> a >> b;
    
    pair<int, pi> dp[a.length() + 1][b.length() + 1];
    for(int i = 0; i <= a.length(); i++)
        for(int j = 0; j <= b.length(); j++)
            dp[i][j] = MP(0, MP(0,0));

    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j])
                max_self(dp[i+1][j+1], MP(dp[i][j].F+1, MP(i,j)) );
            max_self(dp[i+1][j], MP(dp[i][j].F, MP(i,j)));
            max_self(dp[i][j+1], MP(dp[i][j].F, MP(i,j)));
        }
    }

    pair<int, pi> ans = MP(0, MP(0, 0));
    for(int i = 0; i <= a.size(); i++){
        for(int j = 0; j <= b.size(); j++){
            ans = max(ans, dp[i][j]);
        }
    }
    string str = "";
    while(!(!ans.S.F || !ans.S.S)){
        str += b[ans.S.F-1];
        ans = dp[ans.S.F-1][ans.S.S-1];
    }
    cout << str << endl;
}
int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
