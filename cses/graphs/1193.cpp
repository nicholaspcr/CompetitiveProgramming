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

bool check(char c){
	return c == 'A' || c == 'B' || c == '.';
}

vi g[MAXN];
int vis[MAXN];
string str;
int currMv;
int n, m;
pi pA, pB;

void dfs(int u, int mv, bool *t){
	vis[u] = 1;
	pi coor = MP(u/m, u%m);
	if(coor.F == pB.F && coor.S == pB.S){
		*t = true;
		return;
	}	
	for(int i = 0; i < (int)g[u].size(); i++){
		int v = g[u][i];
		if(!vis[v])
			dfs(v, mv+1, t);
		if(*t){
			if(mv+1 < currMv)
				str = "";
			}else{
				break;
			}
			pi newCoor = MP(v/m, v%m);
			if(newCoor.F == coor.F+1){
				str += 'D';
			}else if(newCoor.F == coor.F-1)
				str += 'U';
			else if(newCoor.S == coor.S+1)
				str += 'R';
			else if(newCoor.S == coor.S-1)
				str += 'L';
				
			*t = true;
		}
	}	
	vis[u] = 2;	
}

void solve(){	
	for(int i = 0; i < MAXN; i++) g[i].clear();
	memset(vis, 0, sizeof vis);
	str = "";    
	currMv = 0;
    cin >> n >> m;
    char ent[n][m];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ent[i][j];
			if(ent[i][j] == 'A')
				pA = MP(i,j);
			if(ent[i][j] == 'B')
				pB = MP(i,j);
		}
	}
	
	int dirX[4] = { 1, 0, -1, 0 };
	int dirY[4] = { 0, 1, 0,  -1};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(check(ent[i][j])){
				for(int k = 0; k < 4; k++){
					int nX = i + dirX[k];
					int nY = j + dirY[k];
					if(nX < 0 || nX >= n || nY < 0 || nY >= m)
						continue;
					else{
						if(check(ent[nX][nY])){
							g[i*m + j].PB(nX*m + nY);
							g[nX*m + nY].PB(i*m + j);
						}
					}
				}
			}
		}
	}
	bool teste = false;
	dfs(pA.F * m + pA.S, 0, &teste);
	if(teste){	
		cout << "YES\n";
		cout << (int)str.size() << endl;		
		reverse(all(str));
		cout << str << endl;
	}else
		cout << "NO\n";	
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
