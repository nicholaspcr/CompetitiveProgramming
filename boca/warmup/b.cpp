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
  vi fac;
  int op = 1;
  int opFac = 1;
  while(opFac <= 1e5){
		opFac *= (op++);
		fac.PB(opFac);
	}
		
	int ans = 0;
	for(int i=(int)fac.size()-1;i>=0;i--){
		ans += n / fac[i];
		n = n%fac[i];
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
