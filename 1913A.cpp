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

int main(){
  fio;
  int t;cin>>t;while(t--){
    bool pass;
    string input;cin>>input;
    int a, b, c = stoi(input);
    int index= 1;
    while(true){
      string s1 = input.substr(0, index);
      string s2 = input.substr(index);
      //cout<<"A = "<<s1<<" B = "<<s2<<nl;
      a = stoi(s1);b = stoi(s2);
      
      //cout<<"A = "<<a<<" B = "<<b<<nl;
      if(a>b){
        pass = false;
        break;
      }
      else if(b > a && c==a*b)pass = true;break;
      ++index;
    }
    if(pass)cout<<a<<" "<<b<<nl;else cout<<-1<<nl;
  }
  rr;
}