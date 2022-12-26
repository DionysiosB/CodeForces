#include<cstdio>

char ans[333][555];

void prt(int h, int d, int f, int c) {
    int r = h;
    for(int p=0;p<d;p++)
        ans[r-p][c] = ans[r+p][c] = '|';
    ans[r-d][c] = ans[r+d][c] = '+';
    ans[r-d][c+f] = ans[r+d][c+f] = '-';
}

int main() {

    int n; char s[111]; scanf("%d\n%s", &n, s);
    int mh(0), c(0), d(0);
    for(int p = 0; p < n; p++) {
        d += (s[p] == '[') ? 1 : -1;
        mh = (mh > d) ? mh : d;
    }

    d = c = 0;
    for(int p = 0; p < n; p++) {
        if(p){c += (s[p-1]=='[' && s[p]==']') ? 4 : 1;}
        if(s[p] == '['){d++;}
        prt(mh, mh - d + 1, (s[p]=='[')?1:-1, c);
        if(s[p]==']'){d--;}
    }

    for(int p = 0; p <= 2 * mh; p++) {
        for(int j = 0; j <= c; j++){putchar(ans[p][j] ?: ' ');}
        puts("");
    }

    return 0;
}
