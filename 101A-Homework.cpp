#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>


int main(){

    const int N = 26;
    std::vector<std::pair<long, long> > countVec(N);
    for(int p = 0; p < N; p++){countVec[p].first = 0; countVec[p].second = p;}

    std::string word; getline(std::cin, word);
    int k; scanf("%d\n", &k);

    for(int p = 0; p < word.size(); p++){++countVec[word[p] - 'a'].first;}
    std::sort(countVec.begin(), countVec.end());

    int different(0);
    for(int p = 0; p < N; p++){if(countVec[p].first > 0){++different;}}

    std::set<char> removed;
    for(int p = 0; p < N; p++){
        if(countVec[p].first <= 0){continue;}
        if(countVec[p].first <= k){k -= countVec[p].first; removed.insert('a' + countVec[p].second); --different;}
        else{break;}
    }


    printf("%d\n", different);
    for(int p = 0; p < word.size(); p++){if(removed.find(word[p]) == removed.end()){printf("%c", word[p]);}}
    puts("");

    return 0;
}

