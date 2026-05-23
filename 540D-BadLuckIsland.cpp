#include <cstdio>

int main(){

    int r, s, p; scanf("%d %d %d\n", &r, &s, &p);
    double prob[r + 1][s + 1][p + 1];
    for(int a = 0; a <= r; a++){
        for(int b = 0; b <= s; b++){
            for(int c = 0; c <= p; c++){
                prob[a][b][c] = 0;
            }
        }
    }
    prob[r][s][p] = 1;

    for(int sum = r + s + p; sum >= 0; sum--){
        for(int remR = r; remR >= 0; remR--){
            for(int remS = s; remS >= 0; remS--){
                int remP = sum - remR - remS;
                if(remP < 0 || remP > p){continue;}
                if(remR == 0 && remS == 0){continue;}
                if(remP == 0 && remS == 0){continue;}
                if(remR == 0 && remP == 0){continue;}
                double current = prob[remR][remS][remP];
                long waysS = remR * remS;
                long waysP = remS * remP;
                long waysR = remP * remR;
                long totalWays = waysR + waysS + waysP;
                if(remR > 0){prob[remR - 1][remS][remP] += current * waysR / totalWays;}
                if(remS > 0){prob[remR][remS - 1][remP] += current * waysS / totalWays;}
                if(remP > 0){prob[remR][remS][remP - 1] += current * waysP / totalWays;}
            }
        }
    }

    double ansR(0), ansS(0), ansP(0);
    for (int remR = 1; remR <= r; remR++){ansR += prob[remR][0][0];}
    for (int remS = 1; remS <= s; remS++){ansS += prob[0][remS][0];}
    for (int remP = 1; remP <= p; remP++){ansP += prob[0][0][remP];}

    printf("%.10lf %.10lf %.10lf\n", ansR, ansS, ansP);

    return 0;
}
