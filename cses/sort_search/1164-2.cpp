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

struct person{
  int arrival, departure;
  int room;

  person operator < (const person &r) const{
    return departure < r.arrival;
  }
};

void solve(){	
  int n;cin>>n;
  vector<person> p(n);
  for(int i=0;i<n;i++){
    cin>>p[i].arrival;
    cin>>p[i].departure;
  }
  int ans = 0;
  int curr = 0;
  for(int i=0;i<n;i++){
    if(curr == 0){

    }else{
      auto it = s.find((MP(0, v[i].F),0));
      if(it != s.end()){
        rooms[i] = it->S;
        s.erase(it);
        s.insert(MP(MP(v[i].S, v[i]
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  //solve();
  return 0;
}
