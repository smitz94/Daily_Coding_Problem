#include <bits/stdc++.h>

using namespace std;

pair<int,int> con(int a,int b)
{
	pair<int,int> p;
	p.first=a;
	p.second=b;
	
	return p;
}

int car(pair<int,int> p)
{
	return p.first;
}

int cdr(pair<int,int> p)
{
	return p.second;
}


int main()
{
	int a,b;
	cout<<"Enter both numbers: ";
	
	cin>>a;
	cin>>b;
	
	cout<<car(con(a,b));
	cout<<endl;
	cout<<cdr(con(a,b));
	
}
