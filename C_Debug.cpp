#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{  
   string s;cin>>s;
   for(int i=0;i<s.size();i++){
      if(s[i]=='A'){
        int j=i;
        while(j>=0 && s[j-1]=='W' && s[j]=='A'){
         s[j]='C';
         s[j-1]='A';
         j--;
        }
      }
   }
   cout<<s;
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
