#include <cstdio>
#include <iostream>
#include <vector>
#define big 1e8
#define fori(i,n) for(i=0;i<n;++i)
#define vi vector<long>
using namespace std;
int main()
{
    //freopen("file.in","r",stdin);
    int e,f,n;
    cin>>e>>f>>n;
    vi mas(n);
    vi cos(n);
    int i;
    fori(i,n)
     {
      cin>>cos[i]>>mas[i];
     }
    vi min(f-e+1,big);
    vi mx(f-e+1,-1);
    int j;
    i=0;
    min[0]=0;
    mx[0]=0;
    while(i<f-e)
      {
        fori(j,n)
         if(mx[i]!=-1 && i+mas[j]<=f-e)
          {
            if(mx[i+mas[j]]<mx[i]+cos[j])
              mx[i+mas[j]]=mx[i]+cos[j];
            if(min[i+mas[j]]>min[i]+cos[j])
              min[i+mas[j]]=min[i]+cos[j];
          }
        ++i;
      }
//    fori(i,f-e+1)
//        cout<<' '<<mx[i];
      if(mx[f-e]!=0 && min[f-e]!=big)
      cout<<min[f-e]<<' '<<mx[f-e];
    else
      cout<<"This is impossible";
    return 0;
}
