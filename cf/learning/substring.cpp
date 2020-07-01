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

void count_sort(vi &p, vi &c){
  int n = p.size();
  vector<int> cnt(n);
  for(auto x:c)
    cnt[x]++;

  vi p_new(n);;
  vi pos(n);
  pos[0] = 0;

  for(int i=1;i<n;i++){
    pos[i] = pos[i-1] + cnt[i-1];
  }
  for(auto x: p){
    int i = c[x];
    p_new[pos[i]] = x;
    pos[i]++;
  }
  p = p_new;
}

vi prepare(string str){
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
  while((1<<k)<n){
    for (int i=0;i<n;i++){
      p[i] = (p[i]-(1<<k)+n)%n;
    }
    count_sort(p, c);
    
    vi c_new(n);
    c_new[p[0]] = 0;
    for(int i=1;i<n;i++){
      pi prev = {c[p[i-1]], c[(p[i-1] + (1<<k))%n]};
      pi now = {c[p[i]], c[(p[i]+(1<<k))%n]};
      if(now == prev)
        c_new[p[i]] = c_new[p[i-1]];
      else
        c_new[p[i]] = c_new[p[i-1]]+1;
    }
    c = c_new;
    k++;
  }

  return p;
}

void solve(){	
  string str;
  cin>>str; str+="$";
  vi p = prepare(str);
  p.erase(p.begin()); // removes $ index
  str.erase(str.begin()+str.size()-1); // removes $ from string 
  int t;cin>>t;
  while(t--){
    bool flag = false;
    string ent; cin>>ent;
    int n = ent.size();
    int l = 0, r = p.size()-1;
    while(l <= r){
      int mid = (r-l)/2 + l;
      string op = str.substr(p[mid], p[mid]+n);
      int res = 0;
      for(int i=0;i<n;i++){
        if(op[i]<ent[i]){
          res--;break;
        }
        if(op[i]>ent[i]){
          res++;break;
        }
      }
      if(res<0){
        l = mid+1;
      }else if(res>0){
        r= mid-1;
      }else{
        flag = true; break;
      }
      //cout<<l<<" "<<r<<" "<<p[mid]<<" "<<op<<endl;
    }
    if(flag)
      cout<<"Yes\n";
    else
      cout<<"No\n";
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
