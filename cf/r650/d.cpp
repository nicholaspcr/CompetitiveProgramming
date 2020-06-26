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
  string str;cin>>str;
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  map<char,int> m;
  for(int i=0;i<str.size();i++){
    m[str[i]]++;
  }
  
  vector<char> ans(n, '-');
  while(1){
    bool flag = true;
    for(int i=0;i<n;i++)
      if(ans[i] == '-')
        flag = false;
    if(flag) break;


    for(int i=0;i<n;i++){
      if(v[i] == 0){
        auto it = m.end();
        it--;
        ans[i] = it->F;
        if(it->S > 1){
          it->S--;
        }else{
          m.erase(it);
        }
        v[i] = INT_MAX;
        for(int j=0;j<n;i++){
          if(i==j)continue;
          v[j]= v[j] - abs(i-j);
        }
        break;
      }
    }
    cout<<"TEST\n";
  }
  for(int i=0;i<n;i++)
    cout<<ans[i];
  cout<<endl;
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
