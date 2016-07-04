#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> beauty(n);

    for(int p = 0; p < n; p++){scanf("%ld", &beauty[p]);}

    long remaining = k;

    for(int p = 0; p < n; p++){
        if(remaining <= 0){break;}
        printf("1 %ld\n", beauty[p]);
        --remaining;
    }

    for(int first = 0; first < n; first++){
        if(remaining <= 0){break;}
        for(int second = first + 1; second < n; second++){
            if(remaining <= 0){break;}
            printf("2 %ld %ld\n", beauty[first], beauty[second]);
            --remaining;
        }
    }


    return 0;
}
