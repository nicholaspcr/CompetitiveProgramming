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

void solve(){	
  int n;cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  bool sig = (v[0] < 0)? false:true;
  ll max_sum = 0;
  ll best = v[0];
  for(int i=0;i<n;i++){
    bool op = (v[i] < 0)? false:true;
    if(op != sig){
      max_sum+=best;
      best = v[i];
      sig = op;
    }else{
      max_self(best,v[i]);
    }
  }
  max_sum+=best;
  cout<<max_sum<<endl;
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
