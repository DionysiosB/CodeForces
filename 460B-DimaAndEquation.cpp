#include <cstdio>
#include <vector>

int digitSum(long input){

    int output(0);
    while(input > 0){
        output += (input % 10);
        input /= 10;
    }

    return output;
}

long long myPower(long base, long exponent){
    long long output(1);
    for(int p = 0; p < exponent; p++){output *= base;}
    return output;
}

int main(){

    const int M = 1e9;
    const int N = 81;
    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
    std::vector<long long> solutionVec;

    for(int p = 1; p < N; p++){
        long long candidate = b * myPower(p, a) + c;
        if(digitSum(candidate) == p && candidate < M){solutionVec.push_back(candidate);}
    }

    printf("%ld\n", solutionVec.size());
    for(int p = 0; p < solutionVec.size(); p++){
        printf("%lld ", solutionVec[p]);
    }

    return 0;
}
