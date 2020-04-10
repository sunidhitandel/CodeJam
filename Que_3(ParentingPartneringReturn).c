#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int cn=1;cn<=t;cn++){
		int n;
		cin>>n;
		pair<int,pair<int,int> > arr[n];
		string ans(n,'0');
		int c=0,j=0;

		for(int i=0;i<n;i++){
			cin>>arr[i].first>>arr[i].second.first;
			arr[i].second.second=i;
		}
		bool fl=1;
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			if(arr[i].first>=c){
				ans[arr[i].second.second]='C';
				c=arr[i].second.first;
			}
			else if(arr[i].first>=j){
				ans[arr[i].second.second]='J';
				j=arr[i].second.first;
			}
			else{
				fl=0;
				break;
			}
		}
		if(fl)
			cout<<"Case #"<<cn<<": "<<ans<<endl;
		else
			cout<<"Case #"<<cn<<": IMPOSSIBLE"<<endl;

	}
}
