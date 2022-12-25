#include <cstdio>
#include <vector>

int main(){

    long n, v; scanf("%ld %ld\n", &n, &v);

    std::vector<long> dealers;

    for(long p = 0; p < n; p++){
        long k; scanf("%ld", &k);
        bool deal = 0;
        while(k--){
            long price; scanf("%ld", &price);
            if(price < v){deal = 1;}
        }

        if(deal){dealers.push_back(p + 1);}
    }


    printf("%ld\n", dealers.size());
    for(long p = 0; p < dealers.size(); p++){printf("%ld ", dealers[p]);}
    puts("");

    return 0;
}
