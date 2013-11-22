#include <cstdio>
#include <vector>

int main(){
    int x,y,a,b;scanf("%d %d %d %d", &x, &y, &a, &b);

    int minV = std::max(a, b + 1);
    int maxP = std::min(y, x - 1);

    std::vector<std::pair<int,int>> output;
    int total = 0;

    for(int v = minV; v <= x; v++){
        for(int p = b; p <= std::min(v - 1,maxP); p++){
            output.push_back(std::pair<int,int>(v,p));
            ++total;
        }
    }

    printf("%d\n", total);
    for(int k = 0; k < output.size(); k++){printf("%d %d\n", output[k].first, output[k].second);} 

    return 0;
}
