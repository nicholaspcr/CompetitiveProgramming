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
  vi a(n), b(n);
  int minA = INT_MAX;
  int minB = INT_MAX;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i] < minA) minA = a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
    if(b[i] < minB) minB = b[i];
  }
  ll ans = 0;
  for(int i=0;i<n;i++){
    int opA = a[i] - minA;
    int opB = b[i] - minB;
    ans += min(opA, opB) + (max(opA,opB) - min(opA,opB));
  }
  cout<<ans<<endl;
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
