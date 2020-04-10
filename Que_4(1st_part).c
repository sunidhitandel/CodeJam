#include <bits/stdc++.h>
using namespace std;
int main()
{
  int s,n;
  cin>>s>>n;
  for(int _=1;_<=s;_++)
  {
  	int answer[n+1];
  	for(int i=1;i<=n;i++)
  	{
  		cout<<i<<endl;
  		cin>>answer[i];
  	}
  	for(int i=1;i<=n;i++)
  		cout<<(char)(answer[i]+'0');
  	cout<<endl;
  	char verdict;
  	cin>>verdict;
  	if(verdict!='Y') exit(0);
  }
 	return 0;
}
