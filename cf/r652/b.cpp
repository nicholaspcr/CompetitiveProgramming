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
  int n;cin>>n;
  string str;cin>>str;
  int tZ = 0, tO = 0;
  for(int i=0;i<str.size();i++){
    if(str[i] == '1') break;
    tZ++;
  }
  for(int i=str.size()-1;i>=0;i--){
    if(str[i] == '0') break;
    tO++;
  }
  string op = str;
  sort(all(op));
  if(op == str)
    cout<<str<<endl;
  else{
    if(!tZ && !tO)
      cout<<"0\n";
    else{
      for(int i=0;i<tZ;i++)
        cout<<"0";
      for(int i=0;i<tO;i++)
        cout<<"1";
      cout<<endl;
    }
  }
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
