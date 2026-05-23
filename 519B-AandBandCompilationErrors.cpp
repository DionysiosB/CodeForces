#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> initial(n), first(n - 1), second(n - 2), out(1);
    for(long p = 0; p < initial.size(); p++){scanf("%ld", &initial[p]);}
    for(long p = 0; p < first.size(); p++){scanf("%ld", &first[p]);}
    for(long p = 0; p < second.size(); p++){scanf("%ld", &second[p]);}

    sort(initial.begin(), initial.end());
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    std::set_difference(initial.begin(), initial.end(), first.begin(), first.end(), out.begin()); 
    printf("%ld\n", out[0]);
    std::set_difference(first.begin(), first.end(), second.begin(), second.end(), out.begin()); 
    printf("%ld\n", out[0]);

    return 0;
}
