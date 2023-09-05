#include <cstdio>
#include <set>

int main(){

    const int N = 1024;
    int t; scanf("%d", &t);
    while(t--){
        std::set<int> s;

        int n; scanf("%d", &n);
        for(int p = 0; p < n; p++){int x; scanf("%d", &x); s.insert(x);}

        int res(-1);
        for(int u = 1 ; u < N; u++){
            std::set<int> w;
            for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){w.insert((*it) ^ u);}
            if(s == w){res = u; break;}
        }

        printf("%d\n", res);
    }

    return 0;
}
