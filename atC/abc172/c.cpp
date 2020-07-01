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
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll> a(n), b(m);
  vector<ll> A(n), B(m);
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<m;i++)cin>>b[i];
  for(int i=0;i<n;i++){
    if(i==0) A[i] = a[i];
    else A[i] = A[i-1] + a[i];
  }
  for(int i=0;i<m;i++){
    if(i==0) B[i] = b[i];
    else B[i] = B[i-1] + b[i];
  }
  int j = m-1;
  ll ans = 0;
  for(int i=0;i<n;i++){
    if(A[i] > k)
      break;
    while(j >= 0 && B[j] > k-A[i])j--;
    max_self(ans, (ll)((i+1)+(j+1)));
  }
  cout<<ans<<endl;
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
