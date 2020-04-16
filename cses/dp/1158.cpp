#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(),x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve(){
    int n, x;
    cin >> n >> x;
    vpi books(n);
    for(int i = 0; i < n; i++)
        cin >> books[i].F; // PRICE
    for(int i = 0; i < n; i++){
        cin >> books[i].S; // PAGES
    }

    //sort(all(books));
    vi dp(x+1, -1);    
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = x; j >= 0; j--){
			if( (dp[j] != -1) && j+books[i].F <= x){
				dp[j+books[i].F] = max(dp[j+books[i].F], dp[j]+books[i].S);
			}
		}
    }    
    int ans = 0;
    for(int i = 0; i <= x; i++){
		//cout << dp[i] << " ";
        ans = max(dp[i], ans);
    }
    printf("%d\n", ans);
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
