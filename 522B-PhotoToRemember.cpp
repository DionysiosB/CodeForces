#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> dim(n);
    long totalWidth(0), maxHeight(0), secondHeight(0), tallest(0);
    for(long p = 0; p < n; p++){
        long w, h; scanf("%ld %ld\n", &w, &h);
        dim[p] = w; totalWidth += w;

        if(h >= maxHeight){secondHeight = maxHeight; maxHeight = h; tallest = p;}
        else if(h >= secondHeight){secondHeight = h;}
    }

    for(long p = 0; p < n; p++){printf("%ld ", (totalWidth - dim[p]) * (p == tallest ? secondHeight : maxHeight));}
    puts("");

    return 0;
}
