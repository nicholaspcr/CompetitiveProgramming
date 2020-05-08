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

int check(string str){
  int num = 0;
  for(int i = 0; i < (int)str.size(); i++){
    num *= 10;
    num += (int)str[i] - (int)'0';
  }
  return num%2019;
}


void solve(){
  string s;
  cin>>s;
  if((int)s.size() < 4){
    if(check(str))
      cout<<
  }else{

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
