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
    vector<ll> a(3);
    ll w;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    cin>>w;
    sort(all(a));
    vector<ll> b(a), c(a), d(a);

    ll ans = 0;
    a[2] += w;
    ll op = a[0]*a[0] + a[1]*a[1] + a[2]*a[2] + 7*min(a[0], min(a[1],a[2]));
    max_self(ans, op);
    b[0] += w;
    op = b[0]*b[0] + b[1]*b[1] + b[2]*b[2] + 7*min(b[0],min(b[1],b[2]));
    max_self(ans,op);
    c[1] += w;
    op = c[0]*c[0] + c[1]*c[1] + c[2]*c[2] + 7*min(c[0], min(c[1],c[2]));
    max_self(ans,op);

    if(w && d[0] == 0){
        w--;d[0]++;
    }
    if(w && d[1] == 0){
        w--;d[1]++;
    }
    if(w && d[2] == 0){
        w--;d[2]++;
    }
    
    d[2] += w;
    op = d[0]*d[0] + d[1]*d[1] + d[2]*d[2] + 7*min(d[0],min(d[1],d[2]));
    max_self(ans,op);

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
