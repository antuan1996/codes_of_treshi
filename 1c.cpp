#include <iostream>
#include <vector>
using namespace std;
struct pole
{
	int m;
	int pr;
	int len;
};
int main()
{
	int n;
	pole max;
	max.len=1;
	max.pr=0;
	cin>>n;
	vector <pole> mas(n);
	for(int i=0;i<n;++i)
	 {
		 cin>>mas[i].m;
		 mas[i].len=1;
		 mas[i].pr=-1;
		 
		 for(int c=i-1;c>=0;--c)
		  if(mas[c].m<mas[i].m && mas[c].len+1>mas[i].len)
		   {
			   mas[i].len=mas[c].len+1;
			   mas[i].pr=c;
		   }     
	     if(max.len<mas[i].len)
			    {
					max.pr=i;
					max.len=mas[i].len;
				}
	 }  
	int s=max.len; 
	vector<int> mr(s); 
		cout<< s<<'\n';
	for(int j=s-1;j>=0;--j)
	 {
		 if(max.pr>=0)
		  {max=mas[max.pr];
	   	  mr[j]=max.m;}
	 }
	for(int j=0;j<s;++j)
	 cout<< mr[j]<<' ';	 
	return 0;
}

