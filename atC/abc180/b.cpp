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
  int n; cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  ll a = 0;
  double b = 0.0;
  int c = 0;

  for(int i=0;i<n;i++){
    a += abs(v[i]);
    b += (double)abs(v[i])*abs(v[i]);
    max_self(c, abs(v[i]));
  }
  b = sqrt(b);
  printf("%lld\n", a);
  printf("%.32lf\n", b);
  printf("%d\n", c);
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
