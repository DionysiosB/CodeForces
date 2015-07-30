#include <cstdio>
#include <vector>
#include <algorithm>


struct strat{long order; double outcome;};

bool stratSort(strat A, strat B){
    if(A.outcome < B.outcome){return 0;}
    else if(A.outcome == B.outcome){return A.order < B.order;}
    return 1;
};


int main(){

    long n, t1, t2, k; scanf("%ld %ld %ld %ld\n", &n, &t1, &t2, &k);
    std::vector<strat> mushVec(n);

    for(int p = 0; p < n; p++){
        long speed1, speed2; scanf("%ld %ld", &speed1, &speed2);
        double first  = speed1 * t1 * (1 - 0.01 * k) + speed2 * t2;
        double second = speed2 * t1 * (1 - 0.01 * k) + speed1 * t2;
        double result = (first < second) ? second : first;
        mushVec[p].order = p + 1; mushVec[p].outcome = result;
    }

    sort(mushVec.begin(), mushVec.end(), stratSort);
    for(long p = 0; p < n; p++){printf("%ld %.2lf\n", mushVec[p].order, mushVec[p].outcome);}

    return 0;
}
