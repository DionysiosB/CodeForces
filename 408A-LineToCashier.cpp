#include <cstdio>
#include <vector>

int main(){

    const int timePerItem = 5;
    const int timePerCustomer = 15;

    int n(0); scanf("%d", &n);
    std::vector<int> numCustomers(n,0);
    for(int k = 0; k < n; k++){scanf("%d", &numCustomers[k]);}

    long minTime = 1000000000;
    for(int k = 0; k < n; k++){
        long totalTime = 0;
        for(int m = 0; m < numCustomers[k]; m++){int temp; scanf("%d", &temp); totalTime += temp;}
        totalTime *= timePerItem;
        totalTime += timePerCustomer * numCustomers[k];
        if(totalTime < minTime){minTime = totalTime;}
    }

    printf("%ld\n", minTime);

    return 0;
}
