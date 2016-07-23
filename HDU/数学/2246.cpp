#include<math.h>
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		long long s;
		scanf("%lld",&s);
		long long i=pow(6.0*s,1.0/3);
		long long tmp=i*(i+1ll)/2;
		if(tmp%3==0)
			tmp=tmp/3*(i+2);
		else
			tmp=(i+2)/3*tmp;
		if(tmp<s)
			i++;
			
		tmp=(i-1)*i/2;
		if(tmp%3==0)
			tmp=tmp/3*(i+1);
		else
			tmp=(i+1)/3*tmp;
			
		long long ai=s-tmp;
		long long j=sqrt(2.0*ai);
		if(j*(j+1)/2<ai)
			j++;
		
		long long k=ai-(j-1)*j/2;
		printf("%d %d %d\n",i,j,k);
			
	}
}
