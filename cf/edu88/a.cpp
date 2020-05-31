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
  // cards, jokers, players
  int n,m,k;
  cin>>n>>m>>k;
  int handSz = n/k;
  int qtdJ = (m >= handSz) ? handSz : m;
  m -= qtdJ;
  int oponent = m/(k-1);
  if( m%(k-1) ) oponent++;
  //cout<<qtdJ<<" "<<oponent<<endl;
  cout<<max(qtdJ-oponent, 0)<<endl;
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
