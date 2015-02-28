#include <cstdio>
#include <iostream>

int main(){

    long n(0), k(0), w(0); scanf("%ld %ld %ld\n", &n, &k, &w);
    std::string candy(""); getline(std::cin, candy);
    long *cumCount = new long[candy.size() + 1];
    long *cumModCount = new long[candy.size() + 1];

    cumCount[0] = 0;cumModCount[0] = 0;
    for(long u = 1; u <= candy.size(); u++){cumCount[u] = cumCount[u - 1] + (candy[u - 1] == '1');}


    for(long u = 0; u < k; u++){cumModCount[u] = 0; if(u == n){break;}}
    for(long u = k; u <= candy.size(); u++){cumModCount[u] = cumModCount[u - k] + (candy[u - 1] == '1');}


    while(w--){
        long left(0), right(0); scanf("%ld %ld\n", &left, &right);
        long correct = cumModCount[right] - cumModCount[left - 1];
        long additions = ((right - left + 1) / k - correct);
        long removals  = ((cumCount[right] - cumCount[left - 1]) - correct);
        printf("%ld\n", additions + removals);
    }

    return 0;
}
