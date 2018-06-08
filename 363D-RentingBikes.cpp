#include <cstdio>
#include <vector>
#include <algorithm>

long checkRent(const std::vector<long> &budget, const std::vector<long> &cost, long money, long count){

    long n = budget.size();
    long m = cost.size();
    if(count > m || count > n){return -1;}

    long extra(0), budgetSum(0), totalCost(0);

    for(long p = 0; p < count; p++){
        totalCost += cost[p];
        budgetSum += (cost[p] < budget[n - count + p]) ? cost[p] : budget[n - count + p];
        extra += (cost[p] < budget[n - count + p]) ? 0 : (cost[p] - budget[n - count + p]);
    }

    if(extra > money){return -1;}
    if(totalCost < money){return 0;}
    return (totalCost - money);
}


int main(){

    long n, m, a; scanf("%ld %ld %ld", &n, &m, &a);
    
    std::vector<long> b(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    sort(b.begin(), b.end());

    std::vector<long> c(m, 0);
    for(long p = 0; p < m; p++){scanf("%ld", &c[p]);}
    sort(c.begin(), c.end());

    long left(1), right((m < n) ? m : n);
    long budgetNeeded(0);
    while(left <= right){
        long mid = (left + right) / 2;
        budgetNeeded = checkRent(b, c, a, mid);
        if(budgetNeeded < 0){right = mid - 1;}
        else{left = mid + 1;}
    }

    budgetNeeded = checkRent(b, c, a, right);
    printf("%ld %ld\n", right, budgetNeeded);

    return 0;
}
