#include <cstdio>
#include <vector>
#include <queue>

bool check(const std::vector<long> &avail, std::vector<long> prep, long ns, long upper){

    std::vector<long> lastDay(ns + 1, -1);
    long count(0);
    for(long day = upper; day >= 0; day--){
        long subject = avail[day];
        if(subject <= 0){continue;}
        if(lastDay[subject] <= 0){++count; lastDay[subject] = day;}
    }

    if(count < ns){return false;}
    std::queue<long> q;
    for(long day = upper; day >= 0; day--){
        long subject = avail[day];
        if(lastDay[subject] == day){q.push(subject);}
        else if(q.size() > 0){
            long current = q.front();
            --prep[current];
            if(prep[current] <= 0){q.pop();}
        }
    }

    return q.empty();
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> d(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &d[p]);}
    std::vector<long> a(m + 1, 0);
    for(long p = 1; p <= m; p++){scanf("%ld", &a[p]);}

    bool possible(false);
    long left(0), right(n - 1);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(d, a, m, mid)){right = mid - 1; possible = true;}
        else{left = mid + 1;}
    }

    printf("%ld\n", possible ? (left + 1) : (-1));

    return 0;
}
