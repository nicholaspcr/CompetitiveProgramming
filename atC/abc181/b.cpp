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

ll f(ll x){
	return (x*(x+1))/2;
}

void solve(){	
  int n;cin>>n;
  ll sum = 0;
  for(int i=0;i<n;i++){
		ll a, b;
		cin>>a>>b;
		
		sum += f(b) - f(a-1) ;
	}
	cout<<sum<<endl;
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
