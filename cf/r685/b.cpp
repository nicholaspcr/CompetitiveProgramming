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
  int n, q;
  cin>>n>>q;
  string str; cin>>str;
  vi v(n);
  for(int i=0;i<n;i++){
		v[i] = (str[i] == '1') ? 1 : 0;
	}
	while(q--){
		int a, b;
		cin>>a>>b;
		a--;b--;
		bool flag = false;
		for(int i=0;i<a;i++){
			if(v[i] == v[a]){
				flag = true;
				break;
			}
		}
		for(int i=b+1;i<n;i++){
			if(v[i] == v[b]){
				flag = true;
				break;
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
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
