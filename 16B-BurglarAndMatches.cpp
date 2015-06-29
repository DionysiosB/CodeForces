#include <cstdio>
#include <vector>
#include <algorithm>

struct container{long long boxes, matches;};

bool contSort(container A, container B){return A.matches < B.matches;}

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<container> contVec(m);
    for(long k = 0; k < m; k++){scanf("%lld %lld", &contVec[k].boxes, &contVec[k].matches);}

    sort(contVec.begin(), contVec.end(), contSort);

    long capacity = n;
    long long output(0);
    for(long k = m - 1; k >= 0; k--){
        if(capacity > contVec[k].boxes){
            output += contVec[k].boxes * contVec[k].matches;
            capacity -= contVec[k].boxes;
        }
        else{
            output += capacity * contVec[k].matches;
            break;
        }
    }

    printf("%lld\n", output);

    return 0;
}
