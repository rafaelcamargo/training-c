#include <stdio.h>

void main(){

	double pi, n;
	int d, c = 0;

	pi = 4;
	d = 1;
	n = (double) 4/d;

	while (n > 0.0001) {
		d = d + 2;
		n = (double) 4/d;
		if(c%2 == 0)
			pi = pi - n;
		else
			pi = pi + n;
		c++;
	}

}
