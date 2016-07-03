#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main() {
	int score;
	while(scanf("%d",&score)!=EOF) {
		if(score<0||score>100) {
			puts("Score is error!");
			continue;
		}
		switch(score/10) {
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				puts("E");
				break;
			case 6:
				puts("D");
				break;
			case 7:
				puts("C");
				break;
			case 8:
				puts("B");
				break;
			case 9:
			case 10:
				puts("A");
				break;
		}
	}
}

