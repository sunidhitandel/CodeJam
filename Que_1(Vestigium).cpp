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

    int k=0,ri=0,ci=0,n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        int c[n]={0},flag=1;
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j] ;

            if(c[arr[i][j]-1] >0 && flag==1)
            {
                ci++;
                flag=0;
            }
            c[arr[i][j]-1]++;
            if(i==j)
            {
               k+=arr[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
        {
            int r[n]={0};
            for(int j=0;j<n;j++)
            {
                if((r[arr[j][i]-1]) >0 )
                {
                    ri++;
                    break;
                }
                r[arr[j][i]-1]++;
            }
        }
    cout << "Case #"<< x << ": " ;
    cout << k << " "<< ci <<" "<< ri << endl ;
    }
}

