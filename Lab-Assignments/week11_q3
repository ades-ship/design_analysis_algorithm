
#include <bits/stdc++.h>
using namespace std;
bool subset(int arr[], int n)
{
	int sum = 0;
	int i, j;
	for (i = 0; i < n; i++)
		sum += arr[i];
        
	if (sum % 2 != 0)
		return false;
     sum=sum/2;
	bool dp[n+ 1][sum+ 1];
	for( i=0;i<n+1;i++)
    {
        for(j=0;j<sum+1;j++)
        {
            if(i==0)
              dp[i][j]=false;
            if(j==0)
            dp[i][j]=true;
        }
    }

	for (i = 1; i <=n; i++) 
    {
		for (j = 1; j <=sum; j++) 
        {
			if (arr[i - 1]<=j)
				 dp[i][j] = dp[i-1][j] || dp[i -1][j - arr[i-1]];
            else
               dp[i][j] = dp[i-1][j];
		}
	}

	return dp[n][sum];
}
int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	if (subset(arr, n) == true)
		cout <<"yes";
	else
		cout <<"no";
	return 0;
}
