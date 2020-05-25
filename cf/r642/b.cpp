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

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

void solve(){	
  int n,k;
  cin>>n>>k;
  vi a(n), b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];

  sort(all(a));
  sort(b.rbegin(), b.rend());
  int pA = 0, pB = 0;
  while(k--){
    if(b[pB] <= a[pA]) break;
    swap(b[pB], a[pA]);
    pB++;
    pA++;
  }
  ll ans = 0;
  for(int i=0;i<n;i++){
    ans+=a[i];
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
