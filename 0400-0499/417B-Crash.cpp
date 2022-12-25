#include <cstdio>
#include <map>

int main(){

    long n(0); scanf("%ld", &n);
    std::map<long, long> solutions;
    bool possible(1);

    for(int k = 0; k < n; k++){
        long number(0), participant(0); scanf("%ld %ld", &number, &participant);
        if(solutions.find(participant) != solutions.end()){
                if(number > 1 + solutions[participant]){possible = 0; break;}
                if(number > solutions[participant]){solutions[participant] = number;}
        }
        else{
            if(number > 0){possible = 0; break;}
            else{solutions.insert(std::pair<long, long>(participant, 0));}
        }
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
