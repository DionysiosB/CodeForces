#include <cstdio>
#include <vector>

long binarySearch(std::vector<long> data, long input){

    if(input < data[0]){return 0;}
    long left(0), right(data.size() - 1);
    long mid = (left + right) / 2;

    while(true){
        if(input < data[mid]){right = mid;}
        else if(input > data[mid]){left = mid;}
        else if(input == data[mid]){return mid;}

        if(right <= left + 1){
            if(input == data[left]){return left;}
            else{return left + 1;}
        }
        mid = (left + right) / 2;
    }
    
    return 0;
}

int main(){

    long n(0); scanf("%ld", &n);
    std::vector<long> wormVec(n);

    long cumsum(0);
    for(int p = 0; p < n; p++){
        long temp; 
        scanf("%ld", &temp); 
        cumsum += temp; 
        wormVec[p] = cumsum;
    }

    long m(0); scanf("%ld", &m);
    while(m--){
        long x; scanf("%ld", &x);
        printf("%ld\n", 1 + binarySearch(wormVec, x));
    }

    return 0;
}
