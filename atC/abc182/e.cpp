#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}



void solve(){	
		int h,w,n,m;
		cin>>h>>w>>n>>m;
		vector<vi> mat(h, vi(w));
		vpi lights(n);
		for(int i=0;i<n;i++){
			cin>>lights[i].F>>lights[i].S;
			mat[lights[i].F-1][lights[i].S-1] = 2;
		}
		vpi blocks(m);		
		for(int i=0;i<m;i++){
			cin>>blocks[i].F>>blocks[i].S;
			mat[blocks[i].F-1][blocks[i].S-1] = -1;
		}
		vpi dirs = { {0,1}, {-1,0}, {0,-1}, {1,1} };		
		for(int i=0;i<n;i++){
			pi p = {lights[i].F-1, lights[i].S-1};
			for(auto d : dirs){
				cout<<d.F<<" "<<d.S<<endl;
				int op = 1;
				while(1){
					if(p.F+op*d.F >= h) break;
					if(p.S+op*d.S >= w) break;
					if(p.F+op*d.F < 0) break;
					if(p.S+op*d.S < 0) break;
					if(mat[p.F+op*d.F][p.S+op*d.S] == -1 || mat[p.F+op*d.F][p.S+op*d.S] == 2)
						break;					
					
					mat[p.F+op*d.F][p.S+op*d.S] = 1;
					op++;
				}
			}
		}
		int ans = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cout<<mat[i][j]<<" ";
				if(mat[i][j] == 1)
					ans++;
			}
			cout<<endl;
		}
		cout<<ans<<endl;
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
