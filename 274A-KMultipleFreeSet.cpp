#include <cstdio>
#include <algorithm>
#include <vector>

bool binarySearch(std::vector<long> input, long value){

    if(input.size() == 0){return 0;}

    long left(0), right(input.size() - 1);

    while(left + 1 < right){
        long mid = (left + right) / 2;
        if(input[mid] == value){return 1;}
        else if(value < input[mid]){right = mid;}
        else if(input[mid] < value){left = mid;}
    }
    if(input[left] == value || input[right] == value){return 1;}

    return 0;
}



int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);
    long * array = new long[n];
    for(long p = 0; p < n; p++){scanf("%ld", array + p);}
    std::sort(array, array + n);

    std::vector<long> currentSet;

    for(int p = 0; p < n; p++){
        if(array[p] % k != 0){currentSet.push_back(array[p]);}
        else{
            bool exists(0);
            long divisor = array[p] / k;
            if(!binarySearch(currentSet,divisor)){currentSet.push_back(array[p]);}
        }
    }

    printf("%ld\n", currentSet.size());

    return 0;
}
