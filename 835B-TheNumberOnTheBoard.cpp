#include <iostream>
#include <vector>

int main(){

    const int N = 10;
    long k; std::cin >> k;
    std::string s; std::cin >> s;

    std::vector<long> count(N, 0);
    long sum(0);
    for(long p = 0; p < s.size(); p++){sum += (s[p] - '0'); ++count[s[p] - '0'];}
    
    long diff(0), rem = k - sum;
    if(rem > 0){
        for(long p = 0; p < N - 1; p++){
            long available = (N - 1 - p) * count[p];
            if(rem > available){rem -= available; diff += count[p];}
            else{diff += (rem / (N - 1 - p)) + ((rem % (N - 1 - p)) > 0); break;}
        }

    }

    printf("%ld\n", diff);

    return 0;
}
