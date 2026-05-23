#include <cstdio>
#include <set>

int main(){

    int n; scanf("%d\n", &n);
    if(n < 2){puts("-1"); return 0;}

    std::set<long> X, Y;
    for(int p = 0; p < n; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        X.insert(x); Y.insert(y);
    }

    if(X.size() < 2 || Y.size() < 2){puts("-1"); return 0;}

    long length = (*(X.begin())) - (*(++X.begin()));
    if(length < 0){length = -length;}

    long width = (*(Y.begin())) - (*(++Y.begin()));
    if(width < 0){width = -width;}

    printf("%ld\n", length * width);
    return 0;
}
