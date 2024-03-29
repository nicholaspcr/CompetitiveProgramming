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

int getSmallest(int n, int v){
  if(n == 0) return 0;
  return min( n-(abs(v)%n), abs(v)%n);
}

void solve(){	
  int n;cin>>n;
  vi v(n);
  vi memo(n+1);
  for(int i=0;i<n;++i){
    cin>>v[i];
    int smallest = getSmallest( v[i], i+1 );
    memo[ (i+1)+smallest ] = 1; 
  }
  for(int i=0;i<n;++i){
    if(memo[i] == 0){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
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
