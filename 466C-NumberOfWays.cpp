#include <cstdio>
#include <vector>

int main(){

    long long n; scanf("%lld", &n);


    std::vector<long long> array(n, 0);
    long long sum(0);
    for(long long p = 0; p < n; p++){
        scanf("%lld", &array[p]);
        sum += array[p];
    }

    if(sum % 3 != 0){puts("0"); return 0;}

    long long third = sum / 3;

    std::vector<long long> cumLeftThird(n, 0);
    long long cumsum(0), thirdCount(0);
    for(long p = 0; p < n; p++){
        cumsum += array[p];
        if(cumsum == third){++thirdCount;}
        cumLeftThird[p] = thirdCount;
    }

    //for(long p = 0; p < n; p++){printf("= %ld\t", cumLeftThird[p]);}

    cumsum = 0;
    long long total = 0;
    for(long p = n - 1; p >= 2; p--){
        cumsum += array[p];
        if(cumsum == third){total += cumLeftThird[p - 2];}
    }

    printf("%lld\n", total);

    return 0;
}
