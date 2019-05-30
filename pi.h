// Kod programu liczącego liczbę <b>π</b> z zadanym odchyleniem maksymalnym z wykorzystaniem wzoru Leibniz-a        
    
#define _USE_MATH_DEFINES        

#include <math.h>    
#include <stdlib.h>    
#include <iostream>        

int main()    
{    
    double pi = 0;    
    int n = 1;    
    double prec = 0;        

    std::cout<<"Maksymalne odchylenie:";    
    std::cin>>prec;        

    while(abs(pi - M_PI) > prec){    
        pi += 4 * (n % 2 == 0? -1.0: 1.0) / (2 * n - 1);    
        printf("%.12f %.12f %i
 ",pi,abs(pi - M_PI),n);    
        n++;    
    }    
    getchar();    
    getchar();    
    return 0;    
} 
