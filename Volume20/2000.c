#include <stdio.h>
#include <stdlib.h>

int LAND[21][21] = {};
int x = 10;
int y = 10;

int findJwewlry(char d, int num){
	int flag = 0;
	switch(d) {
		case 'N':
			break;
		case 'S':
			break;
		case 'E':
			break;
		case 'W':
			break;
	}
	return flag;
}

int zensin(int n, int num){
	for (int i = 0; i < num; i++) {

	}
	return ;
}

int main(void){
	int jewelry = 0;
	int commandNum = 0;
	int command[30] = {};
	int yesNo = 0;
	int x, y;
	int tmpNum;
	int flag = 1;
	char direction;
	while (flag == 1) {
		scanf("%d", &jewelry);
		if(jewelry == 0) {
			break;
		} else {
			for (int i = 0; i < jewelry; i++) {
				scanf("%d %d", &x, &y);
				LAND[x][y] = 1;
			}
			scanf("%d", &commandNum);
			for (int i = 0; i < commandNum; i++) {
				scanf("%c %d", &direction, &tmpNum);
			}
		}
	}
	return 0;
}
