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

vi primes;


void crivo(){
  vector<bool> memo(1e8);
  for(ll i=2;i<1e8;i++){
    if(!memo[i]){
      primes.PB(i);
      for(ll j=i*i; j<1e8; j+=i)
        memo[j] = true;
    }
  }
}

void solve(){
  crivo();
  int m,n,k;
  cin>>m>>n>>k;
  vector<ll> a(m), b(n);
  for(int i=0;i<n;i++)cin>>b[i];
  map<int,vi> ind;
  for(int i=0;i<k;i++){
    int l, r, w;
    cin>>l>>r>>w;
    ind[i].PB(r);
  }
  auto it = primes.begin();
  vector<ll> ans;
  int ptr = 0;
  for(auto e : b)
    while(e%(*it)){
      if(it == primes.end()) break;
      it++;
    }
    ans.PB(*it);
    if(it == primes.end()) break;
    if(ans.size() >= m) break;
    
  }

  for(auto e : ans){
    cout<<e<<" ";
  }
  cout<<endl;
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
