#include <cstdio>
#include <vector>

int main(){

    std::vector<long long> first, second;
    long long current(0), firstSum(0), secondSum(0);

    long long n; scanf("%lld\n", &n);
    while(n--){
        scanf("%lld\n", &current);
        if(current > 0){first.push_back(current); firstSum += current;}
        else{second.push_back(-current); secondSum -= current;}
    }

    if(firstSum > secondSum){puts("first");}
    else if(firstSum < secondSum){puts("second");}
    else{
        long long winner = 0;
        for(long long p = 0; p < first.size() && p < second.size(); p++){
            if(first[p] > second[p]){winner = 1; break;}
            else if(first[p] < second[p]){winner = 2; break;}
        }

        if(winner == 1){puts("first");}
        else if(winner == 2){puts("second");}
        else if(winner == 0 && first.size() > second.size()){puts("first");}
        else if(winner == 0 && first.size() < second.size()){puts("second");}
        else if(current > 0){puts("first");}
        else if(current < 0){puts("second");}
        else{puts("error");}
    }

    return 0;
}
