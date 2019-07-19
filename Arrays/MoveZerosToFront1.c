#include<stdio.h>

int main(){
	
	int i,n,Tzeros=0;
	printf("\nTotal elements ? :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]==0)
			Tzeros++;
	int j=Tzeros-1;
	for(i=0;i<n;i++)
		if(a[i]!=0)
			b[++j]=a[i];
	for(i=0;i<Tzeros;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	printf("%d",b[i]);
	return 0;
}

