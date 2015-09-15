#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long n; scanf("%ld\n", &n);

    std::vector<long> data(n, 0);
    for(int p = 0; p < n; p++){scanf("%ld ", &data[p]);}

    bool started(0), done(0), possible(1);
    long start(1), end(1);

    for(int p = 1; p < n; p++){
        if(data[p - 1] > data[p] && !started){started = 1; start = p;}
        if(data[p - 1] < data[p] && started && !done){done = 1; end = p;}
        if(data[p - 1] > data[p] && done){possible = 0; break;}
    }
    
    if(possible && started && !done){end = n;}
    if((start > 1 && data[start - 2] > data[end - 1]) || (end < n && data[start - 1] > data[end])){possible = 0;}

    if(!possible){puts("no");}
    else{puts("yes"); printf("%ld %ld\n", start, end);}


    return 0;
}
