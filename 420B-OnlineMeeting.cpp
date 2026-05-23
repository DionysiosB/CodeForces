#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n(0), m(0); scanf("%ld %ld\n", &n, &m);

    std::vector<bool> possible(n + 1,1);
    std::set<long> present;
    long start = 0;
    long lastLeft = 0;

    while(m--){
        char action; long member; scanf("%c %ld\n", &action, &member);

        if(action == '+'){
            if(present.size() > 0){possible[member] = 0;}
            else if(start > 0 && start != member){possible[member] = 0;}
            else if(start == 0 && lastLeft > 0 && lastLeft != member){possible[lastLeft] = 0; possible[member] = 0;}
            else{start = member;}
            present.insert(member);
        }
        else{
            lastLeft = member;
            if(present.find(member) == present.end()){
                std::set<long>::iterator setIter;
                for(setIter = present.begin(); setIter != present.end(); setIter++){possible[*setIter] = 0;}
                possible[lastLeft] = 0;
            }
            else{
                present.erase(member);
                if(present.size() > 0){possible[member] = 0;}
                else{start = 0;}
            }

        }
        for(long k = 1; k <= n; k++){if(possible[k]){printf("%ld ", k);}}; printf("--------- Member: %ld  Start:%ld LastLeft: %ld", member, start, lastLeft); puts("");
    }

    long count = 0;
    for(long k = 1; k <= n; k++){if(possible[k]){++count;}}

    puts("-----------");
    printf("%ld\n", count);
    for(long k = 1; k <= n; k++){if(possible[k]){printf("%ld ", k);}}; puts("");

    return 0;
}
