#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<int> b(n); for(int p = 0; p < n; p++){scanf("%d", &b[p]);}
    std::vector<int> v(1, 0);

    int s(0);
    for(int p = 0; p < n; p++){
        int diff = b[p] - s;
        if(diff > 0){
            for(int u = 0; u < v.size(); u++){
                if(diff > 9 - v[u]){diff -= (9 - v[u]); v[u] = 9;}
                else{v[u] += diff; diff = 0; break;}
            }

            while(diff > 0){
                int nd = (diff < 9) ? diff : 9;
                v.push_back(nd); diff -= nd;
            }
        }
        else{
            int w(0);
            for(int u = 0; u < v.size(); u++){
                if(diff > 0){break;}
                diff += v[u]; v[u] = 0; w = u;
            }

            if(w + 1 == v.size()){v.push_back(0);}
            ++w; bool carry = 1;
            while(w < v.size() && v[w] + carry == 10){
                v[w] = 0; carry = 1;
            }
            if(carry){v.push_back(1);}
            v[0] = diff - 1;


        }

        s = b[p];
        for(int p = v.size() - 1; p >= 0; p--){printf("%d", v[p]);}
        puts("");
    }

    return 0;
}
