#include <stdio.h>
#include <string.h>
int main()
{
	char st[21];
	gets(st); 
	int n=strlen(st);
	int mas[n];
	int i;
	char may[n+1];
	for(i=0;i<n;++i) {
		 mas[i]=i+1;}
	int a,s;
	int min;
	do{
     for(a=0;a<n;++a)
	  printf("%c",st[mas[a]-1]);
	 putchar('\n'); 
	 for(i=1;i<=n;++i)
	  may[i]=1;
	 i=n-2;
	 while(i>=0 && mas[i]>mas[i+1]) --i;
	 if(i>=0){ 
		//++nom; 
	  for(a=0;a<i;++a)
	   may[mas[a]]=0;
	 min=mas[i]+1;
	 while(may[min]!=1 && min<=n) ++min;
	 mas[i]=min;
  	  may[min]=0;
	 s=1;
	 for(a=i+1;a<n;++a){
		  while(may[s]!=1 && s<=n) ++s;
		  if(s<=n) mas[a]=s++;}	 }}
	while(i>=0); 
	return 0;}
