#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<int64_t> a(n);
    int64_t total(0);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]); total += a[p];}
    if(total & 1){puts("NO"); return 0;}

    bool possible(false);

    int64_t leftSum(0); std::set<int64_t> leftSet;
    for(int64_t p = 0; p < n; p++){
        leftSum += a[p];
        leftSet.insert(a[p]);
        if(2 * leftSum == total){possible = true; break;}
        else if((2 * leftSum > total) && leftSet.count(leftSum - total / 2)){possible = true; break;}
    }

    int64_t rightSum(0); std::set<int64_t> rightSet;
    for(int64_t p = n - 1; p >= 0; p--){
        if(possible){break;}
        rightSum += a[p];
        rightSet.insert(a[p]);
        if(2 * rightSum == total){possible = true; break;}
        else if((2 * rightSum > total) && rightSet.count(rightSum - total / 2)){possible = true; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
