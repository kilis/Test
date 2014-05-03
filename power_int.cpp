#include "power_int.h"
#include <stdio.h>
#include <stdlib.h>
float power0(int x,int y)//pakape eksponente ar negativiem skaitliem
{
    if (y == 0) return 1;
    else if (y == 1) return x;
    else if (y>0)
        {
        int result = 1;
        for (int i = 0; i < y; ++i) result *= x;
        return result;
    }
    else if (y<0){
        float result = 1;
        y = abs(y);
        for (int i = 0; i < y; ++i) result *= x;
        return 1/result;
    }
};
double power1(int x,int y)//pakape eksponente ar negativiem skaitliem
{
    if (y == 0) return 1;
    else if (y == 1) return x;
    else if (y>0)
        {
        long result = 1;
        for (int i = 0; i < y; ++i) result *= x;
        return result;
    }
    else if (y<0){
        double result = 1;
        y = abs(y);
        for (int i = 0; i < y; ++i) result *= x;
        return 1/result;
    }
};
long double power2(int x,int y)//pakape eksponente ar negativiem skaitliem
{
    if (y == 0) return 1;
    else if (y == 1) return x;
    else if (y>0)
        {
        long long result = 1;
        for (int i = 0; i < y; ++i) result *= x;
        return result;
    }
    else if (y<0){
        long double result = 1;
        y = abs(y);
        for (int i = 0; i < y; ++i) result *= x;
        return 1/result;
    }
};
