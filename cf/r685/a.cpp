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
	/*
	vi div;
	int up = (n > 1e4) ? sqrt(n) : n;
	for(int i=1;i<up;i++){
		if(n%i == 0)
			div.PB(i);
	}
	if(n > 1e4) div.PB(n/2);
	
	int ans = 0;
	int ptr = div.size()-1;
	while(n > 1){
		while(div[ptr] >= n && ptr > 0) ptr--;
		if(ptr == 0){ // only divisible by one
			ans += n-1;
			break;
		}
		//cout<<div[ptr]<<endl;
		ans += n%div[ptr] + 1;
		n /= div[ptr];
	}
	* */
	int ans = 0;
	while(n > 3){
		if(n&1) ans++;
		ans++;
		n/= n/2;
	}
	if(n == 3) ans+=2;
	if(n == 2) ans++;
	cout<<ans<<endl;
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
