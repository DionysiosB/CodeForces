#include <cstdio>

int main(){

    long long a(0), b(0); scanf("%lld %lld", &a, &b);

    if(a == 0){printf("%lld\n", - b * b); for(int k = 0; k < b; k++){printf("x");}; puts("");}
    else if(b == 0){printf("%lld\n", a * a); for(int k = 0; k < a; k++){printf("x");}; puts("");}
    else{
        long long maxScore = -(a + b) * (a + b);
        long optP(0), optQ(0);
        for(long p = 1; p <= a; p++){
            for(long q = p - 1; q <= p + 1; q++){
                if(q < 1 || q > b){continue;}

                long qMin = b / q, qLarge = b % q, qSmall = q - qLarge;
                long long testScore(0);
                testScore += (a - p + 1) * (a - p + 1) + (p - 1);
                testScore -= qSmall  * qMin * qMin + qLarge * (1 + qMin) * (1 + qMin);
                if(testScore > maxScore){maxScore = testScore; optP = p; optQ = q;}
            }
        }
    }

    return 0;
}

