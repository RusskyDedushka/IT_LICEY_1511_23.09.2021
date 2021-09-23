#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, q=0, p=0;
	vector<int> h;
	cin>>a>>b;
	for (int i=3; i<=int(sqrt(b)); i++)
	{
		int x=int(pow(i,4));
		for(int j=2; j<=int(sqrt(i)); j++) if (i%j==0) p++;
			if (p==0)
				{
					while(x<=b)
					{
					if (x>=a && b>=x) {h.push_back(x), q++;}
					x*=2;
					}
				}
			else p=0;
	}
	if (q==0) cout<<"0";
	sort(h.begin(), h.end());
	for(int i=0; i<q; i++)	cout<<h[i]<<endl;
	return 0;
}
