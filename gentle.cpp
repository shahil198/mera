#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[i].first=a;
		arr[i].second=b;

	}
   //input part has been done
	int ans=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((arr[i].first-arr[j].first)<=(arr[j].second-arr[i].second)*(arr[j].first-arr[i].first) && ((arr[j].second-arr[i].second)*(arr[j].first-arr[i].first) )<=(arr[j].first-arr[i].first) )
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;


}