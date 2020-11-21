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


bool test(vi &v, int minQtd, int diff){
	vi op;
	int lower = 0;
	for(int i=0;i<(int)v.size();i++){
		if(v[i] - lower > diff){
			if((int)op.size() < minQtd)
				return false;
			
			lower = v[i];
			op.clear();
		}
		op.PB(v[i]);
	}
	
	if(v[(int)v.size()-1] - lower > diff) return false;
	if((int)op.size() < minQtd) return false;
	return true;
}

void solve(){	
  int n, k; cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(all(v));
  
  if(n%k == 0){
		int ans = INT_MAX;
		for(int i=0;i<n;i+=k){
			min_self(ans, v[i+k-1] - v[i]);
		}
		cout<<ans<<endl;
	}else{
			// binary search
			int l = 0 , r = 1e9;
			while(l < r){
				int mid = l + (r-l)/2;
				if(test(v, k, mid)){
					l = mid+1;
				}else{
					r = mid-1;
				}
			}
			cout<<l<<endl;
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
