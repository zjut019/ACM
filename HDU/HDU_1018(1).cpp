#include<stdio.h> 
#include<stdlib.h>
using namespace std;
struct node {
	int index;
	int v;
	int count;
}nd[1000000];
bool cmp_v(const void* a, const void* b) {
	return (*(node *)a).v - (*(node *)b).v > 0 ? true : false;
}
bool cmp_index(node a, node b) {
	return a.index < b.index;
}
int main() {
	float d=1;
	int i=1,count=1,j=1;
		int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &nd[i].v);
		nd[i].index=i;
	}
	qsort(nd, n, sizeof(node), cmp_v);
	for(i=0;i<n;i++)
	
	for(i=0;i<n;i++) {
		for(;j<=vec[i].v;j++) {
			d*=j;
			while(d>=10) {
				d/=10;
				count++;
			}
		}
		vec[i].count=count;
	}
	sort(vec.begin(), vec.end(), cmp_index);
	for(i=0;i<n;i++)
	printf("%d\n", vec[i].count);
}
