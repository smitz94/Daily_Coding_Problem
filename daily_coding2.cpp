#include <bits/stdc++.h>

using namespace std;

vector<int> product_Except_Self(vector<int> &arr)
{
	int L[arr.size()];
	int R[arr.size()];
	
	vector<int> answer;
	
	L[0]=1;
	R[arr.size()-1]=1;
	
	for(int i=1;i<arr.size();i++)
	{
		L[i]=arr[i-1]*L[i-1];
	}
	
	for(int i=arr.size()-2;i>=0;i--)
	{
		R[i]=R[i+1]*arr[i+1];
	}
	
	for(int i=0;i<arr.size();i++)
	{
		answer.push_back(L[i]*R[i]);
	}
	
	return answer;
}

int main()
{
	int n;
	cout<<"Enter the size of input array: ";
	cin>>n;
	
	vector<int> arr;
	
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	
	vector<int> answer;
	
	answer= product_Except_Self(arr);
	
	cout<<endl;
	for(int i=0;i<answer.size();i++)
	{
		cout<<answer[i]<<" ";
	}
}
