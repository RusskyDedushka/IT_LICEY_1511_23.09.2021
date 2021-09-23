#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

void tabl(string s, int n, int p);

int main()
{
	int n;       
	string s="";
	cin>>n;
	int p=1;
	tabl(s, n, p);
}

void tabl(string s, int n, int p)
{
	if (n==0) cout<<s<<endl;
	if (n>0)
		for (int i=p; i<=n; i++)
		{
			stringstream ss;
			ss << i;
			string str = ss.str();
			s=s+str;
			tabl(s,n-i,i);
			s.erase(s.size()-1,1);
		}
}

