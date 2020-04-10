#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for(int x=1;x<=t;x++)
  {
    string s,ans="";
    cin >> s;
    int p= s[0]-48,q;
    if(p)
        ans.append(p,'(');
    for(int i=0;i<s.length()-1;i++)
    {
        p= s[i]-48;
        q = s[i+1]-48;
        if(p!=q)
         {
            ans.append(1,s[i]);
            if(p > q )
                ans.append(p-q,')');
            else
                ans.append(q-p,'(');
         }
        else
            ans.append(1,s[i]);
    }
    ans.append(1,s[s.length()-1]);
    p= s[s.length()-1]-48;
    if(p)
        ans.append(p,')');
    cout << "Case #"<< x << ": " ;
    cout << ans << endl ;
      }
}
