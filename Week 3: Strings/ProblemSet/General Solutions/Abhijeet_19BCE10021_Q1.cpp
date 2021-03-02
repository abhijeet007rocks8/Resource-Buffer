#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  getline(cin,s);
  s=s+" ";
  int ind;
  string word="";
  for(int i=0;i<s.length();i++)
  {
  	if(s[i]==' ')
  	{
  		ind=i;
  		break;
	}
	else
	{
		word=s[i]+word;
	}
  }
  
  cout<<word+s.substr(ind)<<"\n";
}


int main()
{
ios_base::sync_with_stdio(0); cin.tie(0);
   solve();
return 0;
}
