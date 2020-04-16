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

void solve(){	
    int n,a,b;
    cin>>n>>a>>b;
    string str="";
    for(int i=0;i<n;i++){
      for(char ch='a';ch<='z';ch++){
        map<char,int> m;
        for(int j = i-1; j >= max(0,i-(a-1)); j--) m[str[j]]++;
        if(m.size() < b){
          //cout<<"MENOR\n";
          bool t = true;
           for(auto it:m){
              if(it.F == ch){
                t=false;
               break;
             }
           }
          if(t){
            str+=ch;
            break;
          }else continue;
        }else if(m.size() == b){
        //cout<<"IGUAL\n";
        bool t = false;
          for(auto it:m){
            if(it.F == ch){
              t=true;
              break;
            }
          } 
          if(t){
            str+=ch;
            break;
          }else continue;
        }
      }
    }
  cout<<str<<endl;
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
