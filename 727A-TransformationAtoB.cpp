#include <cstdio>
#include <vector>

void dfs(std::vector<long long> &v, const long long target, bool &possible){

    if(v.empty() || possible || v.back() > target){return;}
    if(v.back() == target){possible = true; return;}

    long long x = v.back();
    v.push_back(2 * x); dfs(v, target, possible);
    if(possible){return;} else{v.pop_back();}
    v.push_back(10 * x + 1); dfs(v, target, possible);
    if(possible){return;} else{v.pop_back();}
    return;
}


int main(){

    long long a, b; scanf("%lld %lld", &a, &b);

    bool possible(0);
    std::vector<long long> steps; steps.push_back(a);
    dfs(steps, b, possible);
    if(possible){
        puts("YES");
        printf("%ld\n", steps.size());
        for(int p = 0; p < steps.size(); p++){printf("%lld ", steps[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
