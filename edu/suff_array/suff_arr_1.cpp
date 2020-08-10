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
  string str; cin>>str;
  str+="$";
  int n = str.size();
  vector<int> p(n), c(n);
  {
    vector<pi> a(n);
    for(int i=0;i<n;i++) a[i] = {str[i], i};
    sort(all(a));

    for(int i=0;i<n;i++) p[i] = a[i].S;
    c[p[0]] = 0;
    for(int i=1;i<n;i++){
      if(a[i].F == a[i-1].F)
        c[p[i]] = c[p[i-1]];
      else
        c[p[i]] = c[p[i-1]] +1;
    }
  }

  int k=0;
  while( (1<<k) <n ){
    vector<pair<pi,int>> a(n);
    for(int i=0;i<n;i++){
      a[i] = {{c[i], c[(i+(1<<k))%n]}, i};
    }
    sort(all(a));
    for(int i=0;i<n;i++)p[i] = a[i].S;
    c[p[0]] = 0;
    for(int i=1;i<n;i++){
      if(a[i].F == a[i-1].F)
        c[p[i]] = c[p[i-1]];
      else
        c[p[i]] = c[p[i-1]]+1;
    }
    k++;
  }

  for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
  cout<<endl;
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
