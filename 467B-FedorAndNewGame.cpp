#include <cstdio>
#include <vector>

std::vector<bool> convertToBinary(int x){
    std::vector<bool> output;
    while(x > 0){output.push_back(x % 2); x /= 2;}
    return output;
}


int compareBinaryVectors(std::vector<bool> first, std::vector<bool> second){

    int output = 0;
    int p = 0;
    while(p < first.size() || p < second.size()){
        if(p < first.size() && p < second.size()){output += (first[p] != second[p]);}
        else if(p < first.size()){output += (first[p] != 0);}
        else if(p < second.size()){output += (second[p] != 0);}
        ++p;
    }
    
    return output;

}


int main(){


    int n,m,k; scanf("%d %d %d\n", &n, &m, &k);

    std::vector<int> xvec(m + 1);
    for(int p = 0; p <= m; p++){scanf("%d\n", &xvec[p]);}
    
    std::vector<bool> anchor = convertToBinary(xvec[m]);

    int friends = 0;
    for(int p = 0; p < m; p++){
        if(compareBinaryVectors(anchor, convertToBinary(xvec[p])) <= k){++friends;}
    }

    printf("%d\n", friends);

    return 0;
}
