#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector <unsigned long> mas;
bool getr(unsigned long c,int n)
{
	long mk=1;
	return (c & (mk<<n))? true:false;
}
bool sol(int n, long s,long *r)
{
	for(unsigned long c=0;c<pow(2,n-1);++c)
	 {
		 long rez=mas[0];
		 for(int x=0;x<n-1;++x)
		  if(getr(c,x))
		  	  rez+=mas[x+1];
		  else
	 	      rez-=mas[x+1];
		if(rez==s)
		 {*r=c; return true;}			   
	 }
	return false; 
}
int main()
{
	long s;
	int	 n;
	cin >> n >>s;
	mas.resize(n);
	for(int i=0;i<n;++i)
	 cin >> mas[i];
	long r; 
	if(sol(n,s,&r)) 
	 {
		 cout<< mas[0];
		 char c;
		 for(int i=1;i<n;++i)
		 {
			  c=(getr(r,i-1))?'+':'-';
			  cout<<c;
			  cout<<mas[i];}
		 cout<<'='<<s;	  		  
	 }
	 else
	  cout<<"No solution";
	return 0;
}
