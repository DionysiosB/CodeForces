#include <cstdio>
#include <vector>
#include <set>


std::vector<long> getFactors(long x, std::vector<bool> qprime){

    std::vector<long> ans;
    for(long p = 2; p * p <= x; p++){
        if(x % p != 0){continue;}
        if(qprime[p]){ans.push_back(p);}
        if(qprime[x / p]){ans.push_back(x / p);}
    }

    if(ans.empty()){ans.push_back(x);}
    return ans;
}


int main(){
    long n, m; scanf("%ld %ld\n", &n, &m);

    //Find all prime numbers;
    std::vector<bool> isPrime(n + 1, 1);
    isPrime[0] = 0; isPrime[1] = 0;
    for(long p = 2; p * p <= n; p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= n; q += p){isPrime[q] = 0;}
    }

    std::vector<long> active(n + 1, 0);
    std::set<long> on;


    while(m--){
        char action; long collider;
        scanf("%c %ld\n", &action, &collider);
    
        std::vector<long> factors = getFactors(collider, isPrime);

        if(action == '+'){
            if(on.count(collider) > 0){puts("Already on");}
            else{
                long conflicted = 0;
                for(long p = 0; p < factors.size(); p++){
                    if(active[factors[p]] > 0){conflicted = active[factors[p]]; break;}
                }

                if(conflicted){printf("Conflict with %ld\n", conflicted);}
                else{
                    puts("Success");
                    on.insert(collider);
                    for(long p = 0; p < factors.size(); p++){active[factors[p]] = collider;}
                }
            }
        }

        else if(action == '-'){
            if(on.count(collider) > 0){
                puts("Success");
                on.erase(collider);
                for(long p = 0; p < factors.size(); p++){active[factors[p]] = 0;}
            }
            else{puts("Already off");}
        }
    }

    return 0;
}
