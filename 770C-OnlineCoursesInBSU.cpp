#include <cstdio>
#include <vector>

void dfs(long cur, const std::vector<std::vector<long> > &req, std::vector<long> &willtake, const std::vector<bool> &took, long root, bool &possible){

    if(!possible){return;}
    if(took[cur]){return;}
    willtake.push_back(cur);
    printf("Adding node: %ld\n", cur);
    for(long p = 0; p < req[cur].size(); p++){
        long nn = req[cur][p];
        if(nn == root){possible = 0; break;}
        dfs(nn, req, willtake, took, root, possible);
    }

    return;
}


int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> m(k);
    for(long p = 0; p < k; p++){scanf("%ld", &m[p]);}
    std::vector<std::vector<long> > pre(n + 1);
    for(long p = 1; p <= n; p++){
        long w; scanf("%ld", &w);
        while(w--){long x; scanf("%ld", &x); pre[p].push_back(x);}
    }

    std::vector<long> courses;
    std::vector<bool> took(n + 1, 0);

    bool possible(true);
    for(int p = 0; p < k; p++){
        printf("Main course: %ld\n", m[p]);
        std::vector<long> willtake;
        dfs(m[p], pre, willtake, took, m[p], possible);
        if(!possible){break;}
        for(long p = willtake.size() - 1; p >= 0; p--){
            if(took[willtake[p]]){continue;}
            took[willtake[p]] = 1;
            courses.push_back(willtake[p]); 
        }
    }

    if(!possible){puts("-1"); return 0;}

    printf("%ld\n", courses.size());
    for(long p = 0; p < courses.size(); p++){printf("%ld ", courses[p]);}
    puts("");

    return 0;
}
