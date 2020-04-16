#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(),e.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    if(n == 1){
		char t;
		cin >> t;
		if(t == '.')
			cout << 1 << endl;
		else
			cout << 0 << endl;
		return;
	}
    int ans[n+1][n+1];
    memset(ans, 0, sizeof ans);
    char grid[n+1][n+1];
    for(int i = 0; i <= n; i++)
		for(int j = 0; j <= n; j++)
			grid[i][j] = '.';
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j < (int)str.size(); j++)
            grid[i][j] = str[j];
    }

    ans[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == '*') continue;
            ans[i][j] %= MOD;

            if(grid[i+1][j] != '*'){
                ans[i+1][j] += ans[i][j];
                ans[i+1][j] %= MOD;
            }
            if(grid[i][j+1] != '*'){
                ans[i][j+1] += ans[i][j];
                ans[i][j+1] %= MOD;
            }
        }
    }
    /*
    printf("\n");
    for(int i = 0; i <= n ; i++){
        for(int j = 0; j <= n; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }*/
    
    cout << ans[n-1][n-1] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
