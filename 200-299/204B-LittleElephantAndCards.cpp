#include<cstdio>
#include<vector>
#include<map>

int main(){

    long n; scanf("%ld\n", &n);

    std::map<long, std::pair<long, long> > cards;
    for(long p = 0; p < n; p++){
        long front, back; scanf("%ld %ld\n", &front, &back);
        if(cards.count(front) > 0){++cards[front].first; ++cards[front].second;}
        else{cards.insert(std::pair<long, std::pair<long, long> >(front, std::pair<long, long>(1, 1)));}

        if(front == back){continue;}

        if(cards.count(back) > 0){++cards[back].first;}
        else{cards.insert(std::pair<long, std::pair<long, long> >(back, std::pair<long, long>(1, 0)));}
    }


    bool possible(0);
    long minMoves(n + 1);

    for(std::map<long, std::pair<long, long> >::iterator mapIter = cards.begin(); mapIter != cards.end(); mapIter++){
        printf("Number: %ld\t total: %ld front: %ld needed:%ld\n", mapIter->first, (mapIter->second).first, mapIter->second.second, (n + 1) / 2);
        if((mapIter->second).first < (n + 1) / 2){continue;}
        possible = 1;
        long candidateMoves = ((n + 1) / 2) - (mapIter->second).second;
        if(candidateMoves < minMoves){minMoves = candidateMoves;}
        if(minMoves < 0){minMoves = 0; break;}
    }

    if(possible){printf("%ld\n", minMoves);} else{puts("-1");}

    return 0;
}
