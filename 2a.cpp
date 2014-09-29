#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool is_pr(long a)
{
	for(long d=2;d<=sqrt(a+1e-8);++d)
	 if(a%d==0) return false;
	return true;
	}
int main()
{
 	long m,n;
 	cin>>m>>n;
 	char f=0;
	int i;
	vector<int>mas(n+1,0);
	 if(n-m+1>m)
	  {
	    for(i=2;i<=n;++i)
	    {
	      if(mas[i]==0)
	      {
		     mas[i]=i;
		     if(i>=m) {cout<<i<<'\n';f=1;}
	      }
	      for(int d=2;d<=i;++d)
		if(mas[d]==d && d<=mas[i]) {if(i*d<=n)mas[i*d]=d; else break;}
	    }
	    for(int e=i;e<n;++e)
	     if(mas[e]==0) cout<<e<<'\n';
	   }
	    else
	    for(long b=m;b<=n;++b)
	    {
		    if(is_pr(b))
		    {
			    cout<<b<<'\n';
			    f=1;
		}
	    }
	     if(!f) cout<<"Absent";
 	 return 0;
}
