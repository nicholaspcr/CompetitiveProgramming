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
  int n;cin>>n;
  ll l = 0;
  if(n < 4){
    cout<<"2\n";
    return;
  }
  for(int i=0;i<n/4;i++){
    l += (1<<(n/2 - i));
    l += (1<<(n/2 + i+1));
  }
  ll r = 0;
  for(int i=1;i<n/4;i++){
    r += (1<<i);
    r += (1<<(n-i+1));
  }

  cout<< (1<<n) - l <<endl;
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
