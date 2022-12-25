#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<long> office(n);
    std::vector<long> hall(n);
    std::vector<long> conf(n);
    std::vector<bool> present(n, true);

    for(int p = 0; p < n; p++){scanf("%ld %ld %ld\n", &office[p], &hall[p], &conf[p]);}

    std::vector<int> treated;
    for(int p = 0; p < n; p++){
        if(!present[p]){continue;}
        treated.push_back(p);
        std::vector<int> toLeave;

        long cry = office[p];
        for(int q = p + 1; q < n && cry > 0; q++){
            if(!present[q]){continue;}
            conf[q] -= (cry--);
            if(conf[q] < 0){toLeave.push_back(q); present[q] = false;}
        }

        while(toLeave.size() > 0){
            int cur = toLeave.back();
            toLeave.pop_back();

            for(int r = cur + 1; r < n; r++){
                if(!present[r]){continue;}
                conf[r] -= hall[cur];
                if(conf[r] < 0){toLeave.push_back(r); present[r] = false;}
            }
        }
    }

    printf("%ld\n", treated.size());
    for(int p = 0; p < treated.size(); p++){printf("%d ", 1 + treated[p]);}
    puts("");

    return 0;
}
