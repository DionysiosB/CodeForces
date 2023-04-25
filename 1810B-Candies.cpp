#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        std::vector<int> seq; bool possible(true);
        while(x > 1){
            if(x % 2 == 0){possible = false; break;}
            if((x / 2) % 2){seq.push_back(2); x /= 2;}
            else{seq.push_back(1); x = (x + 1) / 2;}
        }

        if(possible){
            printf("%ld\n", seq.size());
            for(long p = seq.size() - 1; p >= 0; p--){printf("%d ", seq[p]);}
            puts("");
        }
        else{puts("-1");}
    }

}
