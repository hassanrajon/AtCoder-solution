#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>arr(n);
  map<int,int>mp;
  set<int,greater<int>>st;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    st.insert(arr[i]);
    mp[arr[i]]++;
  }
//   for(auto it:st)cout<<it<<' ';
 vector<int>ans(n);
  int r=1;
  while(st.size()){
    auto it=st.begin();
    int k=mp[*it];
    for(int i=0;i<n;i++){
        if(arr[i]==*it){
            ans[i]=r;
            arr[i]=-1;
        }
    }
    r+=k;
    st.erase(it);
  }
  for(auto &it:ans){
    cout<<it;nl
  }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
