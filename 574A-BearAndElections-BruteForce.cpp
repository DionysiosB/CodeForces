#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    long limak; scanf("%ld", &limak);
    std::vector<long> votes(n - 1);
    for(long p = 0; p < n - 1; p++){scanf("%ld", &votes[p]);}
    sort(votes.begin(), votes.end());
    long maxVotes = votes[n - 2];
    long maxCount = 0;
    for(long p = n - 2; p >= 0; p--){
        if(votes[p] == maxVotes){++maxCount;}
        else{break;}
    }

    bool willWin(false);
    long bribes(0);
    while(!willWin){
        bool given(false);
        sort(votes.begin(), votes.end());
        for(int p = n - 2; p >= 0; p--){
            if(limak <= votes[p]){++limak; --votes[p]; ++bribes; given = 1; break;}
        }

        //printf("%ld\t", limak);
        //for(int p = 0; p < n - 1; p++){printf("%ld ", votes[p]);}
        //puts("");

        if(!given){willWin = true; break;}
    }

    printf("%ld\n", bribes);


    return 0;
}
