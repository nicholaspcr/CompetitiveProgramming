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
  int n,x;
  cin>>n>>x;
  vi v(n);
  int sum = 0;
  for(int i=0;i<n;++i){
    cin>>v[i];
    sum += v[i];
  }
  int s1 = sum, s2 = sum;
  int a = 0, b = n-1;
  int ans = n;
  while(n--){
    if(s1%x){
      cout<<ans-a<<endl;
      return;
    }
    if(s2%x){
      cout<<b+1<<endl;
      return;
    }
    s1-=v[a++];
    s2-=v[b--];
  }
  cout<<-1<<endl;

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
