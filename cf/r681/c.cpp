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

bool cmp(pi l, pi r){
	if(l.S == r.S)
		return l.F>r.F;
	return l.S<r.S;
}

void solve(){	
  int n; cin>> n;
  vpi v(n);
  for(int i=0;i<n;i++) cin>>v[i].F;
  for(int i=0;i<n;i++) cin>>v[i].S;
  sort(all(v), cmp);
  
  pair<ll, int> sum = {0, 0};
  bool flag = false;
  int big = 0;
  for(int i=0;i<n;i++){
		if(sum.F+v[i].S > v[i].F) flag = true;
		
		if(flag){
			max_self(big, v[i].F);
		}else{
			sum.F += v[i].S;
			sum.S++;
		}		
	}
	//cout<<sum.F<<" "<<sum.S<<endl;
	if(sum.S == n && (sum.F < big || big == 0) )
		cout<<sum.F<<endl;
	else
		cout<<big<<endl;	
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
