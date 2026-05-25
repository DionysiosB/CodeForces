#include <cstdio>
#include <vector>
#include <map>

int main(){
    long n; scanf("%ld", &n);
    std::vector<long> a(n); 
    std::map<long, long> m;
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);++m[a[p]];}
    std::map<long, std::vector<long> > v;
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){v[it->second].push_back(it->first);}
    bool possible = (v.count(1) == 0) || (v.count(1) && (v[1].size() % 2 == 0)) || (v.count(1) && v.size() > (1 + v.count(2)));
    int rem = (v.count(1) && v[1].size() % 2);
    if(possible){
        puts("YES");
        int where(0), rem(1);
        for(long p = 0; p < n; p++){
            if(m[a[p]] == 1){printf("%c", 'A' + where); where = 1 - where;}
            else if(m[a[p]] == 2){printf("A");}
            else if(m[a[p]] > 2){printf("%c", 'A' + rem); rem = 0;}
        }
        puts("");
    }
    else{puts("NO");}

    return 0;
}
