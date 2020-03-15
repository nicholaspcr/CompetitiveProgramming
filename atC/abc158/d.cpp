#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve2(){
    string str; cin >> str;
    deque<int> op;
    for(int i = 0; i < str.size(); i++) op.PB(str[i]);
    int q; scanf(" %d", &q);
    bool inv = false;
    string a = "", b = "";
    while(q--){
        int t; scanf("%d", &t);
        if(t == 1){
            inv = !inv;
        }else{
            int f; char ch;
            scanf("%d %c", &f, &ch);
            if(f == 1){
                if(inv)
                    op.push_back(ch);
                else
                    op.push_front(ch);
            }else{
                if(inv) 
                    op.push_front(ch);
                else
                    op.push_back(ch);
            }
        }
    }
    if(inv){
        for(int i = op.size()-1; i >= 0; i--)
            printf("%c", op[i]);
        printf("\n");
    }else{
        for(int i = 0; i < op.size(); i++)
            printf("%c", op[i]);
        printf("\n");
    }
}

void solve(){
    string str; cin >> str;
    int q; scanf("%d", &q);
    bool inv = false;
    while(q--){
        int t;  scanf("%d", &t);
        if(t == 1) inv = !inv;
        else{
            int f;
            char ch;
            scanf("%d %c", &f, &ch);
            if(f == 1){
                if(inv){
                    str = str + ch;
                }else{
                    str = ch + str;
                }
            }else{
                if(inv){
                    str = ch + str;
                }else{
                    str = str + ch;
                }
            }
        }
    }
    if(inv) reverse(str.begin(), str.end());
    cout << str << endl;
}


int main(){
    //int t; cin >> t;
    //while(t--) solve();
    solve2();
    return 0;
}
