#include <cstdio>
#include <vector>
#include <algorithm>

struct envelope{long order; long width; long height;};
bool widthSort(envelope A, envelope B){return A.width < B.width;}

int main(){
    
    long n, cardWidth, cardHeight; scanf("%ld %ld %ld", &n, &cardWidth, &cardHeight);

    std::vector<envelope> envVec;
    for(long k = 0; k < n; k++){
        long w, h; scanf("%ld %ld\n", &w, &h);
        if(w <= cardWidth || h <= cardHeight){continue;}
        envelope current; current.order = k + 1; current.width = w; current.height = h;
        envVec.push_back(current);
    }

    std::sort(envVec.begin(), envVec.end(), widthSort);

    long totalEnv(envVec.size());
    long maxLength(totalEnv > 0), maxFinal(0);
    std::vector<long> endingLength(totalEnv, maxLength);
    std::vector<long> previous(totalEnv, 0);

    for(long p = 0; p < totalEnv; p++){
        for(long q = p + 1; q < totalEnv; q++){
            if((envVec[p].width < envVec[q].width) && (envVec[p].height < envVec[q].height) && (endingLength[q] < endingLength[p] + 1)){
                previous[q] = p;
                endingLength[q] = endingLength[p] + 1;
                if(endingLength[q] > maxLength){maxLength = endingLength[q]; maxFinal = q;}
            }
        }
    }


    printf("%ld\n", maxLength);
    std::vector<long> usedEnv(maxLength, 0);
    long current = maxFinal; for(long k = 0; k < maxLength; k++){usedEnv[maxLength - k - 1] = envVec[current].order; current = previous[current];}
    for(long k = 0; k < maxLength; k++){printf("%ld ", usedEnv[k]);} puts("");

    return 0;
}
