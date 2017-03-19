#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n * n);
    std::map<long, long> counts;
    for(int p = 0; p < n * n; p++){
        scanf("%ld", &array[p]);
        if(counts.count(array[p]) <= 0){counts.insert(std::pair<long, long>(array[p], 0));}
        ++counts[array[p]];
    }
    sort(array.begin(), array.end());

    std::vector<long> output;

    for(int p = 0; p < n; p++){
        long element = array.back();
        while(counts[element] <= 0){array.pop_back(); element = array.back();}
        array.pop_back();
        output.push_back(element);

        for(int r = 0; r < output.size(); r++){
            long currentGcd = gcd(output[r], element);
            counts[currentGcd] -= 2;
        }
    }

    for(long p = 0; p < output.size(); p++){printf("%ld ", output[p]);}
    puts("");

    return 0;
}
