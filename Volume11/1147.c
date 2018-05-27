#include <stdio.h>

int main(void){
	int player = 0;
	int ave_li[100] = {};
	int flag = 1;
	while (flag == 1) {
		scanf("%d", &judger);
		if (judger > 0) {
			int max = -1;
			int min = 1001;
			int sum = 0;
			for (int i = 0; i < judger; i++) {
				scanf("%d", &num);
				if(max < num) max = num;
				if(min > num) min = num;
				sum += num;
			}
			ave_li[player] = (sum - max - min) / (judger -2);
			player++;
		} else {
			flag = 0;	
		}
	}
	for (int i = 0; i < player; i++) {
		printf("%d\n", ave_li[i]);
	}
	return 0;
}
