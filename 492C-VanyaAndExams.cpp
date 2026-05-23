#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long long n, r, avg; scanf("%lld %lld %lld\n", &n, &r, &avg);
    std::vector<std::pair<long, long> > exams(n);

    long long gradeSum(0);
    for(long long p = 0; p < n; p++){
        long long grade, essays; scanf("%lld %lld\n", &grade, &essays);
        exams[p] = std::pair<long long, long long>(essays, r - grade);
        gradeSum += grade;
    }

    sort(exams.begin(), exams.end());

    long long needed = n * avg - gradeSum; 
    long long totalEssays = 0;

    for(long long p = 0; p < n; p++){
        if(needed <= 0){break;}

        long long work = exams[p].first;
        long long available = exams[p].second;

        if(available < needed){totalEssays += available * work; needed -= available;}
        else{totalEssays += needed * work; needed = 0;}
    }

    printf("%lld\n", totalEssays);

    return 0;
}
