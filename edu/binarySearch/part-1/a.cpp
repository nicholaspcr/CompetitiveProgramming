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
	int n, k;
	cin>>n>>k;
	vi v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	while(k--){
		int ent;	cin>>ent;
		int l = 0, r = n-1;
		bool ok = false;
		while(r >= l){			
			int mid = (l+r+1)/2;
			if( v[mid] == ent){
				ok = true;
				break;
			}else if(v[mid] > ent){
				r = mid - 1;
			} else if(v[mid] < ent){
				l = mid + 1;
			}
		}		
		if(ok)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
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
