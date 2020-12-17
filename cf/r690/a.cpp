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

void solve(){	
  int n;
  cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];

  vi ans;
  int a = 0, b = n-1;
  bool flag = false;
  while(a <= b){
    if(!flag){
      ans.PB(v[a++]);
    }else{
      ans.PB(v[b--]);
    }
    flag = !flag;
  }
  for(auto e:ans)
    cout<<e<<" ";
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
