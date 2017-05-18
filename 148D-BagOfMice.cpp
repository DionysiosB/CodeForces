#include <cstdio>

int main(){

    int w, b; scanf("%d %d\n", &w, &b);
    double prob[w + 1][b + 1][2];
    for(int p = 0; p <= w; p++){for(int q = 0; q <= b; q++){for(int r = 0; r <= 1; r++){prob[p][q][r] = 0.0;}}}
    for(int p = 1; p <= w; p++){prob[p][0][0] = 1;}
    
    for(int p = 1; p <= w; p++){
        for(int q = 1; q <= b; q++){
            double win = 1.0 * p / (p + q);
            double nowin = 1.0 - win;
            prob[p][q][0] = win + nowin * prob[p][q - 1][1];

            double outWhite = (q >= 2) ? (1.0 * p / (p + q - 1)) : 1.0;
            double outBlack = 1.0 - outWhite;
            prob[p][q][1] = nowin * (outWhite * prob[p - 1][q - 1][0] + outBlack * ((q >= 2) ? prob[p][q - 2][0] : 0.0));
        }
    }

    printf("%.12lf\n", prob[w][b][0]);

    return 0;
}
