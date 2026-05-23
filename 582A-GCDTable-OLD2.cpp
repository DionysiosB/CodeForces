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

        while(array.back() < 0){array.pop_back();}
        long element = array.back();
        array.pop_back();
        output.push_back(element);

        for(int a = 0; a < output.size(); a++){
            for(int b = 0; b < output.size(); b++){
                long currentGcd = gcd(output[a], output[b]);
                for(int s = array.size() - 1; s >= 0; s--){if(array[s] == currentGcd){array[s] = -1; break;}}
            }
        }
    }

    for(long p = 0; p < output.size(); p++){printf("%ld ", output[p]);}
    puts("");

    return 0;
}
