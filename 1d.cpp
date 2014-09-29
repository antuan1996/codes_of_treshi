#include <iostream>
#include <vector>
struct point
{
	int x;
	int y;
};
using namespace std;
int main()
{
	vector <point> tr(3);
	int i;
	point p;
	for(i=0;i<3;++i)
	 cin>>tr[i].x>>tr[i].y;
	p=tr[2];
	point v1,v2;
	v1.x=tr[1].x-tr[0].x; v1.y=tr[1].y-tr[0].y;
	v2.x=p.x-tr[0].x; v2.y=p.y-tr[0].y;
	int d;
	int f=1;
	if(v1.x*v2.y-v2.x*v1.y>0) d=1; else d=-1;
	cin>> p.x>>p.y;
	for(i=0;i<3;++i)
	 {
		 v1.x=tr[(i+1)%3].x-tr[i].x;
		 v1.y=tr[(i+1)%3].y-tr[i].y;
	     v2.x=p.x-tr[i].x;
	     v2.y=p.y-tr[i].y;
	     if((v1.x*v2.y-v2.x*v1.y)*d<0) {f=0;break;}
	}
	if(f) cout<<"In"; else cout<<"Out"; 
	return 0;
}
