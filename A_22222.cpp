#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  string s;cin>>s;
  string ans;
  for(int i=0;i<s.size();i++){
    if(s[i]=='2')ans.push_back(s[i]);
  }
  cout<<ans;
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
