#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

bool kolvo(int k);

int main()
{
	int a, b, x, k, max=0, Q=0, q=1;
	cin>>a>>b;
	while (a<=b)
	{
		if (a%3==0 && a%11==0 && abs(a)%2==1)
		{
			k=abs(a);
//			cout<<"\tk= "<<k<<endl;
			if (kolvo(k)) {Q++; x=a; q--;}
		}
		if (q==0) max=a;
		if (x>max) max=x;
		a++;
	}
	cout<<Q <<" "<<max;
	return 0;
}

bool kolvo(int k)
{
	int x=0;
	while(k>1)
	{
		if (k%2==0) x++;
		k/=2;
	}
	if (x==5) return true;
	else return false;
}
