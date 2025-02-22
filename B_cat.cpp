#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    map<int,string>mp;
    while (tt--){
        string s;cin>>s;
        mp[s.size()]=s;
    }
    string ans;
    for(auto it:mp)ans+=it.second;
    cout<<ans;
}
