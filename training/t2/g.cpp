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

int qtdBits(ll n){
  int ans = 0;
  while(n){
    n >>= 1;
    ans++;
  }
  return ans;
}

ll possi(int n, int q){
  ll num = 1;
  ll den = 1;
  for(int i=max(n-q, q)+1; i<=n;i++){
    num*=i;
  }
  for(int i=1;i<=min(n-q, q);i++){
    den*=i;
  }
  return num;
}


void solve(){	
  ll n;
  while(cin>>n){
    if(cin.eof()) break;
    int op = 3;
    int qB = qtdBits(n) - 1;
    cout<<qB<<endl;
    ll ans = 0;
    while(op < qB){
      cout<<possi(qB,op)<<endl;
      ans+=possi(qB, op), op+=3;
    }

    cout<<ans<<endl;
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
