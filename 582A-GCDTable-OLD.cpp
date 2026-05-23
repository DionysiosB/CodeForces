#include <cstdio>
#include <vector>
#include <algorithm>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n * n);
    for(int p = 0; p < n * n; p++){scanf("%ld", &array[p]);}
    sort(array.begin(), array.end());

    std::vector<long> output;

    for(int p = 0; p < n; p++){
        long element = array.back();
        array.pop_back();

        for(int q = 0; q < output.size(); q++){
            long currentGcd = gcd(element, output[q]);
            if(array.back() == currentGcd){array.pop_back(); array.pop_back();}
        }

        output.push_back(element);
    }

    for(long p = 0; p < output.size(); p++){printf("%ld ", output[p]);}
    puts("");

    return 0;
}
