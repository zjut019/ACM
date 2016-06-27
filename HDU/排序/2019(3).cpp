#include<stdio.h>
#include<stdlib.h>
struct node {
	int v;
	struct node *next;
};
int main() {
	int n,m;
	while(scanf("%d %d", &n, &m), n||m) {
		struct node *head=NULL,*p,*q,*pre;
		int i;
		for(i=0;i<n;i++) {
			p=(struct node *)malloc(sizeof(struct node));
			p->next=NULL;
			scanf("%d", &p->v);
			if(head==NULL)
				head=q=p;
			else {
				q->next=p;
				q=p;
			}
		}
		pre=NULL;
		q=head;
		while(q!=NULL) {
			if(m<=q->v) {
				p=(struct node*)malloc(sizeof(struct node));
				p->v=m;
				if(q==head) {
					p->next=q;
					head=p;
				} else {
					pre->next=p;
					p->next=q;
				}
				break;
			}
			pre=q;
			q=q->next;
		}
		printf("%d",head->v);
		q=head->next;
		while(q!=NULL) {
			printf(" %d",q->v);
			q=q->next;
		}
		putchar('\n');
	}
}
