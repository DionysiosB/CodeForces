#include <cstdio>
#include <iostream>
#include <map>

std::map<std::pair<int, int>, double> computed;


double getProb(bool princess, int white, int black){

    printf("*** %s %d %d\n", (princess ? "PRINCESS" : "DRAGON"), white, black);

    if(black <= 0){puts("=== No blacks"); return 1.0;}
    if(white <= 0){puts("=== No whites"); return 0.0;}
    
    double winProb = 1.0 * white / (white + black);
    double contProb = 1.0 - winProb;
    
    printf("Win Prob: %d/%d   Cont prob: %d/%d \n", white, (white + black), black, (white + black));

    if(princess){
        double ans = winProb + contProb * (1 - getProb(false, white, black - 1));
        printf("=== %s %d %d Output: %lf\n", (princess ? "PRINCESS" : "DRAGON"), white, black, ans);
        return ans;
    }
    else{
        double escapeWhite = (black >= 2) ? 1.0 * white / (white + black - 1) : 1.0;
        double escapeBlack = 1.0 - escapeWhite;
        double ans = winProb + contProb * (escapeWhite * (1.0 - getProb(true, white - 1, black - 1)) + escapeBlack * (1.0 - getProb(true, white, black - 2)));
        printf("=== %s w:%d b: %d escW: %lf escB: %lf Output: %lf\n", (princess ? "PRINCESS" : "DRAGON"), white, black, escapeWhite, escapeBlack, ans);
        return ans;
    }

    return 0;
}


int main(){

    int w, b; scanf("%d %d\n", &w, &b);
    printf("%.12lf\n", getProb(true, w, b));

    return 0;
}
