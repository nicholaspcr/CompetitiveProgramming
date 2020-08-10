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

bool test(vi a, vi ent){
  return (
      max(ent[0],ent[1]) == a[0]  &&
      max(ent[0],ent[2]) == a[1]  &&
      max(ent[1],ent[2]) == a[2] );
}

void pAns(vi ent){
  cout<<"YES\n";
  cout<<ent[0]<<" "<<ent[1]<<" "<<ent[2]<<endl;
}

void solve(){
  vi a(3);
  for(int i=0;i<3;i++)cin>>a[i];
  sort(all(a));
  vi ent(3);
  for(int i=0;i<3;i++) ent[i] = a[i];
  if(test(a,ent)){
    pAns(ent);
    return;
  }else{
    for(int i=0;i<3;i++){
      int ph = ent[i];
      ent[i] = 1;
      if(test(a,ent)){
        pAns(ent); return;
      }
      ent[i] = ph;
    }
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
