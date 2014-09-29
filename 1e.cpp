#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
vector <int> ch;
void umnoj(int m)
{
	long um=0;
	long b;
	for(int i=ch.size()-1;i>=0;--i)
	 {
		 b=ch[i]*m+um;
		 ch[i]=b%10;
		 um=b/10;
	 }
	while(um>0)
	 {
		 ch.insert(ch.begin(),(int)um%10);
		 um/=10;
	 }  
}
int main()
{
	int n;
	int mn;
	cin>>n>>mn;
	ch.push_back(1);
	while(mn-->0)
	 umnoj(n);
	for(mn=0;mn<ch.size();++mn)
	 cout<<ch[mn]; 
	return 0; 
}
