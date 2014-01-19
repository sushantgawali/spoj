#include <stdio.h>
#include <math.h>
int z(int);

int main(){
	int runs,n,f;
	scanf("%d",&runs);

	while(runs--){
		scanf("%d",&n);
		f = z(n);
		printf("%d\n",f);
	}
	return 0;
}

int z(int n){
	int k=0,i=1;
	for(i=1;i<n;i++){
		int p=pow(5,i);
		k=k+(n/p);
		if(p>n) break;
	}
	return k;
}

