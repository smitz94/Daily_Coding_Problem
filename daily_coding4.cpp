#include <bits/stdc++.h>

using namespace std;

int missing_Number(int *arr,int n)
{	
	if(n==0)
		return 1;
	
	unordered_map<int,int> umap;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			umap[arr[i]]+=1;
		}
	}
	
	int answer=n+1;
	
	for(int i=1;i<=n;i++)
	{
		if(umap.find(i)==umap.end())
		{
			answer=i;
			break;
		}
	}
	
	return answer;
}

int main()
{
	int n;
	cout<<"Enter the size of the input array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int answer;
	
	answer = missing_Number(arr,n);
	
	cout<<endl;
	
	cout<<answer;
}
