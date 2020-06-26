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
  ll n; cin>>n;
  ll op = 1;
  int c = 0;
  while(op<=n){
    op *= 26;
    c++;
  }
  string str(c,'a');
  for(int i=0;i<c;i++){
    ll p = 1;
    for(int j=1; j<c-i;j++){
      p*=26;
    }
    for(int j=1;j<=26;j++){
      if(j*p
    }
    n-=p;
  }
  cout<<str<<endl;
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
