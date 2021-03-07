#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		map<char,int> ma;
		int n = s.length();
		for(int i=0;i<n;i++)
		{
			ma[s[i]]++;
		}
		map<int,int>chk;
		for(auto itr = ma.begin();itr!=ma.end();itr++)
		{
			chk[itr->second]++;
		}
		if(chk.size()>2)
		cout<<"NO"<<endl;
		else if(chk.size()<=1)
		cout<<"YES"<<endl;
		else
		{
			auto it = chk.begin();
			int m = it->first;
			int mc = it->second;
			it++;
			int q = it->first;
			int qc = it->second;
			if(m>q)
			{
				swap(m,q);
				swap(mc,qc);
			}
			if(qc==1 && ((m+1)==q))
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
	return 0;
}