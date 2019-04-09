#include <stdio.h>
#include <math.h>
float Q_rsqrt( int number );
int main() {

    unsigned int num = 1;

    int i = 808201;
    float res = Q_rsqrt(i);
    printf("%d %f %f %f\n",i,i*res, 1/res, sqrt(i));

    i = i - 1;
    res = Q_rsqrt(i);
    printf("%d %f %f %f\n",i,i*res, 1/res, sqrt(i));  
}

float Q_rsqrt( int number ) {
	int i;
	float x, y;
	const float threehalfs = 1.5F;
 
	x = number * 0.5F;
	y  = number * 1.0F;
	i  = * ( int * ) &y;                       // evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
	y  = * ( float * ) &i;
	// y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration

	return y;
}