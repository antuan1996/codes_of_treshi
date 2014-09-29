#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector <unsigned long> mas;
vector <char> ch;
bool rek(int i, long rez,long w)
{
	if(i<ch.size()-1)
	{
		ch[i]='+';
		if(rek(i+1,rez+mas[i+1],w))  return true;
		ch[i]='-';
		if(rek(i+1,rez-mas[i+1],w)) return true;
	}
	else
		if(rez+mas[i+1]==w ||rez-mas[i+1]==w)
		 {
			if(rez<w) ch[i]='+';
			 else ch[i]='-';
			return true; 
		 }
	ch[i]=0;	 
	return false;	 
}
int main()
{
	long s;
	int	 n;
	cin >> n >>s;
	mas.resize(n);
	ch.resize(n-1);
	for(int i=0;i<n;++i)
	 cin >> mas[i];
	long r=mas[0]; 
	if(rek(0,r,s))
	{
	  cout<<r;
	 for(int k=0;k<n-1;++k)
	   	cout<<ch[k]<<mas[k+1];
	 cout<<'='<<s;  	
	}	 
	else
	  cout<<"No solution";
	return 0;
}
