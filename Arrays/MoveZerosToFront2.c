#include<stdio.h>

int main(){

	int i,n,j;
	printf("\nTotal elements ? :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	while(a[i]==0)
		i++;
	j=i+1;
	while(j<n){
		if(a[j]!=0)
			j++;
		else{
			int k=j;
			while(k>i){
				int t;
				t=a[k-1];
				a[k-1]=a[k];
				a[k]=t;
				k--;
			}
			j++;
			i++;
		}		
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}


   

