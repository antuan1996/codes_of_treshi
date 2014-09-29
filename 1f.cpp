#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#define max 5
using namespace std;
int main()
{
	
	vector<int> mas(max);
	int i;
	for(i=0;i<max;++i)
	 cin >>mas[i];
	sort(mas.begin(),mas.end()); 
	int sov[max+1];
	for(i=0;i<=max;++i)
	 sov[i]=0;
	int k=1;
	int str=1;
	for(i=1;i<max;++i)
	 if(mas[i]==mas[i-1]) ++k; else 
	 {
		 ++sov[k];k=1;
		 if(mas[i]==mas[i-1]+1) ++str; else str=0;
     }
    ++sov[k]; 
    if(sov[5]) cout<<"Impossible"; else
    if(sov[4]) cout<<"Four of a Kind"; else
    if(sov[3] && sov[2]) cout<<"Full House"; else
    if(str==5) cout<<"Straight"; else
    if(sov[3] && !sov[2]) cout<<"Three of a Kind"; else
    if(sov[2]==2) cout<<"Two Pairs"; else
    if(sov[2] && !sov[3]) cout<<"One Pair";
     else cout<<"Nothing";
	return 0;
}
