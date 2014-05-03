#include "fact_int.h"
int fact0(int n)//faktorials veritibas no 0 uz 65535
            {
    int factorial,i;
   for (i = 0; i <= n; i++){
		if (i == 0){
		factorial = 1;
		}
		else{
		factorial = factorial * i;
		}
    }
    return (factorial);
}
unsigned int fact1(unsigned int n)//faktorials veritibas no 0 uz 65535
            {
    unsigned int factorial,i;
   for (i = 0; i <= n; i++){
		if (i == 0){
		factorial = 1;
		}
		else{
		factorial = factorial * i;
		}
    }
    return (factorial);
}
unsigned long int fact2(unsigned long int n)//faktorials veribas no 0 uz 4294967295
            {
    unsigned long int factorial,i;
   for (i = 0; i <= n; i++){
		if (i == 0){
		factorial = 1;
		}
		else{
		factorial = factorial * i;
		}
    }
    return (factorial);
}
unsigned long long int fact3(unsigned long long int n)//faktorials veribas no 0 uz 18446744073709551615
            {
    unsigned long long int factorial,i;
   for (i = 0; i <= n; i++){
		if (i == 0){
		factorial = 1;
		}
		else{
		factorial = factorial * i;
		}
    }
    return (factorial);
}
