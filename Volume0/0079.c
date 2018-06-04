#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double find_length(double x1, double x2, double y1, double y2){
	double x = (x1 - x2);
	double y = (y1 - y2);
	return sqrt(x*x + y*y);
}

double find_area(double a, double b, double c){
	double z = (a + b + c) / 2;
	return sqrt(z * (z - a) * (z - b) * (z - c));
}

int main(void){
	double x[20] = {};
	double y[20] = {};
	double area = 0;
	int i = 0;
	char str[256] = {};
	int flag = 1;
	while (flag) {
		scanf("%s", str);
		printf("1111%s\n", str);
		// if (str == '') {
		// 	x[i] = strtod(strtok(str, ","), NULL);
		// 	y[i] = strtod(strtok(NULL, ","), NULL);
		// 	if (2 <= i) {
		// 		double a = find_length(x[0], x[i-1], y[0], y[i-1]);
		// 		double b = find_length(x[i-1], x[i], y[i-1], y[i]);
		// 		double c = find_length(x[0], x[i], y[0], y[i]);
		// 		area += find_area(a, b, c);
		// } else {
		// 	flag = 0;
		// }
		// i++;
	}
	printf("%lf\n", area);
	return 0;
}
