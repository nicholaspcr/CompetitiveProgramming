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
vi limit(10000001, 0);

void findPrimes(){
  primes.PB(1);
  for(int i=2;i<limit.size();i++){
    if(limit[i] == 1) continue;
    primes.PB(i);
    for(int j=i;j<=limit.size();j+=i)
      limit[j] = 1;
  }
}

void solve(){	
  int n,k;
  cin>>n>>k;
  if(k >= n){
    cout<<1<<endl;
    return;
  }
  int ans;
  int p;
  for(int i=0;i<primes.size();i++){
    if(primes[i] > k) break;
    if(n%primes[i] == 0){
      p = primes[i];
    }
  }
  ans = p;
  if(ans == 1)
    cout<<n<<endl;
  else{
    int op = ans;
    while(op <= k){
      if(n%op == 0) ans = op;
      op += p;
    }
    //cout<<ans<<endl;
    cout<<n/ans<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  findPrimes();
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
