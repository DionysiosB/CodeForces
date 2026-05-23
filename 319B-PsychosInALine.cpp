#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n); 
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    
    bool action(true); long t(0);
    while(action){
        action = false;
        std::vector<long> b;
        long ind(0);
        while(ind  + 1 < a.size() && a[ind] < a[ind + 1]){++ind;} //Initial increasing sequence
        while(ind < a.size()){
            b.push_back(a[ind]);
            while(ind + 1 < a.size() && a[ind] > a[ind + 1]){++ind; action = true;}
            ++ind;
        }

        a = b; t += action;
    }

    printf("%ld\n", t);

    return 0;
}
