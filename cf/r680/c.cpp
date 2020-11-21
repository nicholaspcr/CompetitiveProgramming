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
  ll a, b;
  cin>>a>>b;
  int c  = 1;
  while(a%(a/c) != 0 || (a/c)%b == 0){
		if(a/c < sqrt(a)) break;
		c++;
	}
  if(a%(a/c) == 0 && (a/c)%b != 0){
		cout<<a/c<<endl;
	}else{
		for(int i=sqrt(a); i >= 1; i--){
			if(a%i == 0 && i%b != 0){
				cout<<i<<endl;
				return;
			}
		}
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
