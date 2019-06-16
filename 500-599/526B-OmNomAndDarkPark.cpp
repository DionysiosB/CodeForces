#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    long numEdges(0); long depthNodes(1);
    for(int p = 0; p < n; p++){depthNodes *= 2; numEdges += depthNodes;}
    std::vector<long> lights(numEdges);
    for(long p = 0; p < numEdges; p++){scanf("%ld\n", &lights[p]);}

    long total(0);
    while(depthNodes > 1){
        long initialSize = lights.size();
        for(int p = 0; p < depthNodes / 2; p++){
            long a = lights.back(); lights.pop_back();
            long b = lights.back(); lights.pop_back();
            long M = (a < b) ? b : a; 
            long m = (a < b) ? a : b;
            total += (M - m);
            if(depthNodes > 2){lights[initialSize - 1 - depthNodes - p] += M;}
        }

        depthNodes /= 2;
    }

    printf("%ld\n", total);

    return 0;
}
