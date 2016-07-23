#include<stdio.h>
#include<stdlib.h>
struct node{
	int index;
	int v;
	int count;
}nd[1000000];
int cmp_v(const void *a, const void *b) {
	return (*(struct node*)a).v -  (*(struct node*)b).v;
}
int cmp_index(const void* a, const void* b) {
	return (*(struct node*)a).index -  (*(struct node*)b).index;
}
int main() {
	int n;
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++) {
		scanf("%d", &nd[i].v);
		nd[i].index=i;
	}
	qsort(nd, n, sizeof(struct node), cmp_v);
	double f = 1.0;
	int j=1,count=1;
	for(i=0;i<n;i++) {
		while(j<=nd[i].v) {
			f*=j;
			while(f>=10) {
				f/=10;
				count++;
			}
			j++;
		}
		nd[i].count=count;
	}
	qsort(nd,n,sizeof(struct node),cmp_index);
	for(i=0;i<n;i++)
		printf("%d\n",nd[i].count);
}
