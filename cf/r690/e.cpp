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

ll getPoss(int d){
  int qtdE = 3;
  ll num = 1;
  for(int i = d; i > qtdE; i--)
    num*=i;

  ll den = 1;
  for(int i=2;i<(d-qtdE);i++)
    den*=i;

  return num/den;
}

void solve(){	
  int n; cin>>n;
  int k = 2;
  vi a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(all(a));
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  int l = 0, r = 0;
  ll ans = 0;
  while(l < n){
    while(r < n && a[r]-a[l] <= k) r++;
    if(r-l >= 3){
      cout<<l<<" "<<r<<endl;
      ans += getPoss(r-l);
      l = r;
    }
    l++;
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
