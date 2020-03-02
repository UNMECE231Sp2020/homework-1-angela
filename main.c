#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*func_ptr_arr[])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*func_ptr_arr2[])(Complex) = {magnitude, phase};
	int i=0;
	while(i<4){
		hdlr1(func_ptr_arr[i], a, b); 
		i++;
		 }
	i=0;
	while(i<2){
		hdlr2(func_ptr_arr2[i], a);
		hdlr2(func_ptr_arr2[i], b);
		i++;
	}
	return 0;
}
