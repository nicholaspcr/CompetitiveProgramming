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
  vector<ll> segs(n);
  ll seg = 0;
  ll bestSeg = 0;
  for(int i=0;i<n;i++){		
		seg += v[i];
		max_self(bestSeg, seg);
		segs[i] = bestSeg;	
		//cout<<segs[i]<<" ";	
	}
	//cout<<endl;
	
	vector<ll> sums(n);
	vector<ll> op(n);
	for(int i=0;i<n;i++) op[i] = (i == 0) ? v[0] : op[i-1] + v[i];
	sums[0] = v[0];
	for(int i=1;i<n;i++){		
		sums[i] = sums[i-1] + op[i];		
		//cout<<sums[i]<<" ";
	}
	//cout<<endl;
	

	
	ll ans = 0;
	for(int i=0;i<n;i++){
		//cout<<ans<<" ";
		if(i == 0)
			max_self(ans, segs[i]);
		else
			max_self(ans, sums[i-1] + segs[i]);	
			
		max_self(ans, sums[i]);
	}
	//cout<<endl;	
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
