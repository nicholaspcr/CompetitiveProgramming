#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define MAXN 1000002

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

vi g[MAXN];
int vis[MAXN];

void dfs(int u){
	vis[u] = 1;
	for(int i = 0; i < (int)g[u].size(); i++){
		int v = g[u][i];
		if(!vis[v])
			dfs(v);
	}
	vis[u] = 2;
}

void solve(){	
	for(int i = 0; i < MAXN; i++) g[i].clear();
	memset(vis, 0, sizeof vis);
    int n, m;
    cin >> n >> m;
    char ent[n][m];
    for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> ent[i][j];
			
	int dirX[4] = { 1, 0, -1, 0 };
	int dirY[4] = { 0, 1, 0,  -1};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(ent[i][j] == '.'){
				for(int k = 0; k < 4; k++){
					int nX = i + dirX[k];
					int nY = j + dirY[k];
					if(nX < 0 || nX >= n || nY < 0 || nY >= m)
						continue;
					else{
						if(ent[nX][nY] == '.'){
							g[i*m + j].PB(nX*m + nY);
							g[nX*m + nY].PB(i*m + j);
						}
					}
				}
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < n*m; i++){
		if(ent[i/m][i%m] == '.' && !vis[i]){
			//cout << i << " ";
			dfs(i);
			ans++;
		}
	}
	//cout << endl;
    cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
