#include <stdio.h>

int n, s, count = 0,cur;
int digits[10];

void dfs(int cur){
	if(cur == n){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += digits[i];
		}
		if(sum == s){
			count++;
			for (int i = 0; i < 10; i++) {
				printf("%d ", digits[i]);
			}
			printf("\n");
		}
		return;
	}
	// int flag = 0;
	for (int i = cur; i < 10; i++) {
		digits[cur] = i; //重複を避ける
		dfs(cur+1);
	}
}

int main(void){
	while(scanf("%d %d",&n,&s)!= EOF){
		if(n == 0 && s == 0){
			break;
		}
		count = 0;
		dfs(0);
		printf("%d\n",count);
	}
	return 0;
}
