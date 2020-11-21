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
	map<char,bool> exists;
  int n; cin>>n;
  string str; cin>>str;
  for(int i=0;i<n;i++){
		exists[str[i]] = true;
	}
  int m; cin>>m;
  string mat[m];
  for(int i=0;i<=m;i++){
		cin>>mat[i]
	}
	for(int i=0;i<n;i++){
		if(str[i] != '*') continue;
				
		int uniq = 0;
		for(int j=0;j<m;j++){
				bool flag = true;
				for(auto it:exists){
					if(it.F == mat[j][i]){
						 flag = false;
						 break;
					 }
				}				
		}
	}
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
