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
  int n; cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(all(v));
  pi ans = {0,0};
  for(int i=1000;i>=2;i--){
		pi best = {i,0};
		for(int j=0;j<n;j++){
			if(i > v[j]) continue;
			
			if(v[j] % i == 0)
				best.S++;
		}
		if(best.S > ans.S)
			ans = best;
	}
	cout<<ans.F<<endl;
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
