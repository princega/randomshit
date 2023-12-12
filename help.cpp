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
  int t;cin>>t;cin.ignore();while(t--){
    int n;cin>>n;cin.ignore();
    vector<int> data (26, 0);
    char c;while((c = cin.get()) != '\n'){
      ++data[(int)c-97];
    }
    vector<int> data2;
    for(st i=0;i<26;i++){
      if(data[i]>0) data2.pb(data[i]);
    }
    sort(all(data2));
    int mod = 0;
    for(st i=kitna(data2)-1;i>=0;i--){
      if(i-1>=0){
        mod = (data2[i]+data2[i-1]+mod)%2;
        --i;
      }
      else mod = (data2[i]+mod)%2;
    }
    cout<<mod<<nl;
  }
  rr;
}