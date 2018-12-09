#include <cstdio>
#include <vector>

int main(){

    int p, q, l, r; scanf("%d %d %d %d", &p, &q, &l, &r);

    std::vector<std::pair<int, int> > fixed;
    std::vector<std::pair<int, int> > changing;


    for(int k = 0; k < p; k++){
        int a, b; scanf("%d %d", &a, &b);
        fixed.push_back(std::pair<int,int>(a,b));
    }

    for(int k = 0; k < q; k++){
        int a, b; scanf("%d %d", &a, &b);
        changing.push_back(std::pair<int,int>(a,b));
    }


    bool done;
    int output(0);

    for(int k = l; k <= r; k++){
        done = 0;
        for(int x = 0; x < fixed.size(); x++){
            if(done){continue;}
            for(int y = 0; y < changing.size(); y++){
                if((fixed[x].second < k + changing[y].first) || (k + changing[y].second < fixed[x].first)){continue;}
                else{done = 1; ++output; break;}
            }
        }
    }

    printf("%d\n", output);

    return 0;
}
