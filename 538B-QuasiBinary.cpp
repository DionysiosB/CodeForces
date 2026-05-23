#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<int> source;

    int maxDigit(0);
    while(n > 0){
        int d = n % 10; 
        n /= 10;
        source.push_back(d); 
        if(d > maxDigit){maxDigit = d;}
    }
    std::reverse(source.begin(), source.end());

    std::vector<long> numbers(maxDigit);
    for(int s = 0; s < source.size(); s++){
        int d = source[s];
        for(int p = 0; p < maxDigit; p++){
            numbers[p] = 10 * numbers[p] + (p < d);
        }
    }

    printf("%d\n", maxDigit);
    for(int p = 0; p < numbers.size(); p++){printf("%ld ", numbers[p]);}
    puts("");

    return 0;
}
