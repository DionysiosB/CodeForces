#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> victories(n, 0);

    for(long p = 0; p < m; p++){
        long maxVotes(0), cityWinner(0);
        for(long q = 0; q < n; q++){
            long votes; scanf("%ld", &votes);
            if(votes > maxVotes){cityWinner = q; maxVotes = votes;}
        }
        ++victories[cityWinner];
    }


    long wonCities(0), winner(0);
    for(int p = 0; p < n; p++){
        if(victories[p] > wonCities){wonCities = victories[p]; winner = p;}
    }

    printf("%ld\n", 1 + winner);

    return 0;
}
