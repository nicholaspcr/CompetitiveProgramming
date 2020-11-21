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

int gcd(int a, int b){
		if(b == 0)
			return a;
		return gcd(b, a%b);
}


void solve(){	
  int l, r;
  cin>>l>>r;
  int ans = r+1;

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  cout<<gcd(120,150)<<endl;
  solve();
  return 0;
}
