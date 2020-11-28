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


bool isSame(vi &v){
	int op = v[0];
	for(int i=0;i<(int)v.size();i++){
		if(v[i] != op)
			return false;
	}
	return true;
}

// 2e5
void solve(){	
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)
		cin>>v[i];
  
  if(isSame(v)){
		cout<<0<<endl;
		return;
	}
		
  
  map<int,int>m;
  vi moves(n+1);
  for(int i=0;i<n;i++){
		if(i != 0 && i != n-1){			
			if( (i+1) - m[v[i]] > 1 ){
				//cout<<i+1 <<" "<<m[v[i]]<<endl;
				moves[v[i]]++;
			}
		}
		m[v[i]] = i+1;
	}
	/*
	for(auto e : m){
		if(e.S != n)
			moves[e.F]++;		
	}
	moves[v[0]]--;
	* */
	
	//cout<<endl;
	/*
	for(auto e : moves)
		cout<<e<<" ";
	cout<<endl;
	*/
	
	
	int ans = 1e9;
	for(auto e : m)
		min_self(ans, moves[e.F]);
	cout<<ans+1<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
