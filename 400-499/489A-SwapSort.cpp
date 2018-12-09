#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> array(n,0);
    for(long p = 0; p < n; p++){scanf("%ld", &array[p]);}

    std::vector<std::pair<long, long> > swaps;
    for(long p = 0; p < n - 1; p++){
        long currentMin = array[p];
        long minPos = p;
        for(long q = p + 1; q < n; q++){
            if(array[q] < currentMin){
                currentMin = array[q];
                minPos = q;
            }
        }

        if(minPos > p){
            swaps.push_back(std::pair<long, long>(p, minPos));
            long temp = array[p]; array[p] = array[minPos]; array[minPos] = temp;
        }
    }


    printf("%ld\n", swaps.size());
    for(long p = 0; p < swaps.size(); p++){printf("%ld %ld\n", swaps[p].first, swaps[p].second);}

    return 0;
}
