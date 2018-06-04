#include <stdio.h>

int n, s, count = 0,cur;
int digits[10] = {};
int dataSet[50] = {};

void dfs(int cur){
	if(cur == n){
		int sum = 0;
		for(int i = 0; i < n; i++) sum += digits[i];
		if(sum == s) count++;
		return;
	}
	for (int i = cur; i < 10; i++) {
		if (digits[cur-1] < i) {
			digits[cur] = i;
		}
		dfs(cur+1);
	}
}

int main(void){
	int num = 0;
	while(scanf("%d %d",&n,&s)!= EOF){
		if(n == 0 && s == 0){
			for (int i = 0; i < num; i++) printf("%d\n", dataSet[i]);
			break;
		}
		count = 0;
		dfs(0);
		dataSet[num] = count;
		num++;
		for(int i = 0; i < 10; i++) digits[i] = 0;
	}
	return 0;
}
