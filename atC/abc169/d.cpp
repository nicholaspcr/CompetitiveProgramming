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

const int maxn = 1e6;
vi primes;
vi vis(maxn, 0);

void solve(){	
  ll n; cin>>n;
  int pos = 0;
  int currP = primes[pos];
  int ans = 0;
  while(n>1 && pos < primes.size() && n >= currP){
    if(n%currP == 0){
      n/=currP;
      ans++;
    }
    currP = primes[pos++];
  }
  cout<<ans<<endl;
}

void findPrimes(){
  for(int i=2;i<=maxn;i++){
    if(!vis[i]){
      primes.PB(i);
      for(int j=i;j<=maxn;j+=i)
        vis[j] = 1;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  findPrimes();
  solve();
  return 0;
}
