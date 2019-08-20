#include <bits/stdc++.h>

using namespace std;

bool twosum(vector<int> a,int sum)
{
	unordered_map<int,int> umap;
	
	for(int i=0;i<a.size();i++)
	{
		if(umap.find(sum-a[i])!= umap.end())
		{
			return true;
		}
		else{
			umap[a[i]]=i;
		}
	}
	
	return false;
	
}

int main()
{
	int n;
	cout<<"Number of elements in the array :";
	cin>>n;
	
	vector<int> a;
	
	for(int i=0;i<n;i++)
	{	
		int b;
		cin>>b;
		a.push_back(b);
	}
	
	int sum;
	cout<<"Enter the sum:";
	cin>>sum;
	
	bool flag;
	
	flag=twosum(a,sum);
	cout<<std::boolalpha<<flag;
}
