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
  int n;cin>>n;
  map<int,int> m;
  vi v(n);
  for(int i=0;i<n;i++){
		cin>>v[i];
		m[v[i]]++;
	}
	
	pi ans = {-1,-1};
	for(int i=0;i<n;i++){
		if(m[v[i]] == 1){
			if(ans.F == -1)
				ans = {v[i],i+1};
			else if(v[i] < ans.F)
				ans = {v[i],i+1};		
		}
	}
	if(ans.F == -1)
		cout<<-1<<endl;
	else
		cout<<ans.S<<endl;
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
