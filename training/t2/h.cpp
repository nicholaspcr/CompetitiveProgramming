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
  int t;
  while(cin>>t && t){
    vector<string> a(t), b(t);
    map<pair<string,string>, bool> m;
    for(int i=0;i<t;i++){
      cin>>a[i];
      if(i > 0){
        //m[MP(a[i],a[i-1])] = true;
        m[MP(a[i-1],a[i])] = true;
      }
    }
    int ans = 0;
    for(int i=0;i<t;i++){
      cin>>b[i];
      if(i>0){
        if(!m[MP(b[i-1],b[i])]){
          ans++;
          cout<<b[i-1]<<" "<<b[i]<<endl;
        }
      }
    }
    cout<<ans<<endl;
  }
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
