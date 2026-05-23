#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n);
    std::set<long> remaining;
    for(int p = 1; p <= n; p++){remaining.insert(p);}

    for(int p = 0; p < n; p++){
        scanf("%ld", &array[p]);
        if(remaining.count(array[p]) > 0){remaining.erase(array[p]);}
    }

    std::set<long> used;
    for(int p = 0; p < n; p++){
        if(used.count(array[p]) > 0 || array[p] <= 0 || array[p] > n){long temp = *remaining.begin(); array[p] = temp; remaining.erase(temp);}
        else{used.insert(array[p]);}
    }

    for(int p = 0; p < n; p++){printf("%ld ", array[p]);}; puts("");

    return 0;
}
