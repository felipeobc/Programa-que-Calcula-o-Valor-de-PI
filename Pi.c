#include <stdio.h>
#include <math.h>

double pi (void);

int main(void) {


	printf("%f", pi() );

}

	double pi (void) {


    double pi=0, key;
    int i;

    for( i = 0; i<10000000; i++) {

    	key=(pow(-1,i))/(2*i + 1);
    	key*=4;
    	pi = pi + key;

    }

	return pi;
}