#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "Yes\n";
#define no cout << "No\n";

void solve()
{ 
  string s;cin>>s;
  stack<char>st;
  for(int i=0;i<s.size();i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='<'){
        st.push(s[i]);
    }else{
        if(st.empty()){
            no return;
        }else{
            if((s[i]==')' && st.top()=='(') ||  (s[i]==']' && st.top()=='[') || (s[i]=='>' && st.top()=='<')){
                st.pop();
            }else{
                no return;
            }
        }
    }
  }
  if(st.empty()){
    yes
  }else{
    no
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
