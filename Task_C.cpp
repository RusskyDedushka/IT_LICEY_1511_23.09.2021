#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
ifstream fin("input.txt");
int p=0, q=0, Q=0;
string L, l="", lMax=" ";
getline(fin, L);
for (int j=0; j<int(L.size()); j++) if (L[0]!=L[j]) {p++; break;}
	if (p)
	{
		for(int i=1; i<int(L.size()+1); i++)
		{
			char d=L[i-1], b=L[i];
			if (d!=b)
				{
					l+=d;
					q++;
//				 cout<<l<<" "<<q<<endl;
				}
			else
				{
				l+=d;
				q++;
//				 cout<<l<<" "<<q<<endl;
				if (q>Q) {Q=q; lMax=l;}
//				 cout<<"reset=>"<<l<<" "<<q++<<endl;
				q=0;
				l=" ";
				}
	}
	if (q>Q) {Q=q; lMax=l;}
	cout <<lMax<<" "<<Q;
	}	
	else if (L.size()==1) cout<<L<<" 1";
	else cout<<"0";
fin.close();
return 0;
}




