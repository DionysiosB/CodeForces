#include <cstdio>
#include <vector>

int main(){


    long n(0), d(0), l(0); scanf("%ld %ld %ld", &n, &d, &l);

    long numPos = (n + 1) / 2;
    long numNeg = n / 2;

    long dmin = numPos * 1 - numNeg * l;
    long dmax = numPos * l - numNeg * 1;

    std::vector<long> numbers(n,0);

    if(d < dmin || d > dmax){puts("-1");}
    else{
        if(d > 0){
            for(long k = 1; k < n; k += 2){numbers[k] = 1;}
            long remaining = d + numNeg;
            long common = remaining / numPos;
            long additional = remaining % numPos;
            if(common == 0){common = 1; additional = 0; numbers[1] = 2;}
            for(long k = 0; k < numPos; k++){
                numbers[2 * k] = common;
                if(k < additional){++numbers[2 * k];}
            }
        }
        else{
            for(long k = 0; k < n; k += 2){numbers[k] = 1;}
            long remaining = -d + numPos;
            long common = remaining / numNeg;
            long additional = remaining % numNeg;
            for(long k = 0; k < numNeg; k++){
                numbers[2 * k + 1] = common;
                if(k < additional){++numbers[2 * k + 1];}
            }
        }

        for(long k = 0; k < n; k++){printf("%ld ", numbers[k]);}; puts("");
    }


    return 0;
}
