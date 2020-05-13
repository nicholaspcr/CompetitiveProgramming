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
  int n, k;cin>>n>>k;
  vi v1(k), v2(k);
  for(int i=0; i<k;i++){
    v1[i] = 1;
    v2[i] = 2;
  }
  v1[k-1] += n-k;
  v2[k-1] += n-k*2;

  int sum = 0;
  for(int i=0;i<k;i++){
    sum += v1[i];
  }
  
  bool t = false;
  for(int i = 0; i < k; i++)
    if(v1[i] <= 0) t = true;
  
  if(sum == n && v1[k-1]%2 == v1[0]%2 && !t){
    cout<<"YES\n";
    for(int i=0;i<k;i++)
      cout<<v1[i]<<" ";
    cout<<endl;
    return;
  }

  sum = 0;
  t = false;
  for(int i = 0; i < k; i++)
    if(v2[i] <= 0) t = true;
  for(int i=0;i<k;i++) sum += v2[i];
    if(sum == n && v2[k-1]%2 == v2[0]%2 && !t){
    cout<<"YES\n";
    for(int i=0;i<k;i++)
      cout<<v2[i]<<" ";
    cout<<endl;
    return;
  }

  cout<<"NO\n";
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
