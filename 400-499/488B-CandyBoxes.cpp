#include <cstdio>
#include <algorithm>
#include <vector>

int main(){

    const int N = 1507;

    int n; scanf("%d", &n);

    std::vector<int> g;
    for(int p = 0; p < n; p++){int x; scanf("%d", &x); g.push_back(x);}
    sort(g.begin(), g.end());

    bool possible(false); std::vector<int> v,w;
    for(int a = 1; 3 * a <= N; a++){
        if(possible){break;}
        for(int b = a; b <= 2 * a; b++){
            std::vector<int> s; s.push_back(a); s.push_back(b); s.push_back(4 * a - b); s.push_back(3 * a);
            //printf("%d %d %d %d\n", a, b, 4* a - b, 3 * a);
            std::vector<int> w(4);
            std::vector<int>::iterator it = std::set_difference(s.begin(), s.end(), g.begin(), g.end(), w.begin());
            w.resize(it - w.begin());
            if(w.size() == 4 - n){possible = true; v = w; break;}
        }
    }

    if(possible){puts("YES"); for(int p = 0; p < v.size(); p++){printf("%d\n", v[p]);}}
    else{puts("NO");}

    return 0;
}
