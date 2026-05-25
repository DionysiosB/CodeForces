#include <cstdio>
#include <vector>

std::vector<std::vector<int> > getPair(int inor, int inand){

    std::vector<std::vector<int> > ans;
    if(inor < inand){return ans;}

    for(int a = 0; a < 4; a++){
        for(int b = 0; b <= a; b++){
            std::vector<int> cur(2); cur[0] = a; cur[1] = b;
            if(((a | b) == inor) && ((a & b) == inand)){ans.push_back(cur);}
        }
    }

    return ans;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<int> vecor(n, 0); for(long p = 1; p < n; p++){scanf("%d", &vecor[p]);}
    std::vector<int> vecand(n, 0); for(long p = 1; p < n; p++){scanf("%d", &vecand[p]);}

    std::vector<int> t(n);

    bool possible(false);

    for(long s = 0; s < 4; s++){
        t[0] = s;
        for(long p = 1; p < n; p++){
            std::vector<std::vector<int> > cur = getPair(vecor[p], vecand[p]);
            bool done = false;
            for(int u = 0; u < cur.size(); u++){
                std::vector<int> tmp = cur[u];
                if(t[p - 1] == tmp[0]){t[p] = tmp[1]; done = true; break;}
                else if(t[p - 1] == tmp[1]){t[p] = tmp[0]; done = true; break;}
            }
            if(!done){break;}
            if(p == n - 1){possible = true;}
        }
        if(possible){break;}
    }

    if(possible){
        puts("YES");
        for(long p = 0; p < n; p++){printf("%d ", t[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
