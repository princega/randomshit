#include <iostream>
#include <cstdint>
#include <climits>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
#include <string>
#include <utility>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef size_t st;
typedef uint64_t u64;
typedef int64_t i64;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef unordered_set<int> usi;
typedef unordered_set<char> usc;
typedef vector<pii> vpii;
typedef vector<pcc> vpcc;
#define INF INT_MAX
#define fq first
#define sq second
#define nl '\n'
#define oy cout<<"YES"<<nl
#define on cout<<"NO"<<nl
#define ot cout<<"TRUE"<<nl
#define of cout<<"FALSE"<<nl
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ins insert
#define ti(d,n) for(st i=0;i<n;i++){cin>>d[i];}
#define skip(n) for(st i=0;i<n;i++){cin.ignore();}
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()
#define rr return 0
#define kitna(x) (x).size()
#define rend(x) auto it = x.end();--it
#define set(x, a) memset(x, a, sizeof(x))

int sv(set<int>& x, multiset<pair<int,int>> &y, vector<int> &s){
  vector<int> temp;
  int c = 0, r=0 ;
  for(auto it = x.begin();it!=x.end();++it){
    r = y.count({(*it), 0});
    cout<<"R = "<<r<<",";
    int ercount = 0;
    while((r>=2 && c<4) && ercount<2){
      auto u = y.lower_bound({(*it), 0});
      temp.pb(u->sq);
      y.erase(u);
      ++ercount;
      ++c;
    }
  }

  if(c!=4)return -1;
  else{
  s[temp[0]]=1;
  s[temp[1]]=2;
  s[temp[2]]=1;
  s[temp[3]]=3;
  return 8;
  }
}

int main(){
  fio;
  int t;cin>>t;while(t--){
    int n;cin>>n;
    multiset<pair<int,int>> c;
    set<int> y;
    vector<int> s(n, 1);
    int temp;
    for(int i=0;i<n;i++){
      cin>>temp;
      c.ins(mp(temp, i));
      y.ins(temp);
    }
    int r = sv(y, c, s);
    if(r==-1)cout<<-1<<nl;
    else {
      for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
      }
      cout<<nl;
    }
  }
  rr;
}