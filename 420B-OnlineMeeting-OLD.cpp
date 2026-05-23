#include <cstdio>
#include <vector>

int main(){

    long n(0), m(0); scanf("%ld %ld\n", &n, &m);

    std::vector<bool> possible(n + 1,1);
    bool start(0);
    long current(0);

    while(m--){
        char action; long member; scanf("%c %ld\n", &action, &member);

        if(action == '+'){
            if(start){possible[member] = 0;}
            else{current = member; start = 1;}
        }
        else if(possible[member]){
            if(m > 0 && current > 0){possible[member] = 0;}
            else if(m > 0 && current == 0){start = 0;}
            if(current > 0 && current != member){possible[current] = 0; possible[member] = 0;}
            current = 0;
        }
        for(long k = 1; k <= n; k++){if(possible[k]){printf("%ld ", k);}}; puts("");
    }

    long count = 0;
    for(long k = 1; k <= n; k++){if(possible[k]){++count;}}

    puts("-----------");
    printf("%ld\n", count);
    for(long k = 1; k <= n; k++){if(possible[k]){printf("%ld ", k);}}; puts("");

    return 0;
}
