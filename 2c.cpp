#include <stdio.h>
struct p
{
		int c;
		int d;
};
int main()
{
	int n;
	scanf("%d\n",&n);
	int map[n][n];
	p mar[n][n];
	int x,y;
	char s[n+1];
	for(y=0;y<n;++y)	
		{
			gets(s);
			for(x=0;x<n;++x)
			map[y][x]=(int)s[x]-'0';
		}	
	mar[n-1][n-1].c=map[n-1][n-1];
	mar[n-1][n-1].d=0;
	for(y=n-2;y>=0;--y)
	 {mar[y][n-1].c=map[y][n-1]+mar[y+1][n-1].c;
		mar[y][n-1].d=-1;
	 }	
	for(x=n-2;x>=0;--x)
	 {mar[n-1][x].c=map[n-1][x]+mar[n-1][x+1].c;
		mar[n-1][x].d=1;
	 }
	int k;
	for(k=n-2;k>=0;--k)
		{
			for(y=k;y>=0;--y)
			if(mar[y+1][k].c<mar[y][k+1].c) {mar[y][k].d=-1; mar[y][k].c=map[y][k]+mar[y+1][k].c;}	
				else {mar[y][k].d=1; mar[y][k].c=map[y][k]+mar[y][k+1].c;}	
		for(x=k-1;x>=0;--x)
			if(mar[k+1][x].c<mar[k][x+1].c) {mar[k][x].d=-1; mar[k][x].c=map[k][x]+mar[k+1][x].c;}	
				 else {mar[k][x].d=1; mar[k][x].c=map[k][x]+mar[k][x+1].c;}
		}
	mar[0][0].c*=-1;
	for(y=0;y<n;++y)
		{
		for(x=0;x<n;++x)
			if(mar[y][x].c<0) 
				{
					putchar('#');
					if(mar[y][x].d==1)
					 mar[y][x+1].c*=-1;
					else
						if(mar[y][x].d==-1)
						 mar[y+1][x].c*=-1;
				} else putchar('-');
		putchar('\n');
		}
	return 0;
}
