#include <cstdio>
#include <vector>
#include <algorithm>

struct point{
    long x;
    long y;
    long dist;
};


bool pointCompare(point A, point B){return A.dist < B.dist;}
long labs(long x){return (x < 0) ? -x : x;}

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<point> pointVec(n);

    long total(0);
    for(long p = 0; p < n; p++){
        long a, b; scanf("%ld %ld\n", &a, &b);
        pointVec[p].x = a; pointVec[p].y = b; pointVec[p].dist = labs(a) + labs(b);
        total += 2 *(a != 0) + 2 *(b != 0) + 2;
    }

    printf("%ld\n", total);
    std::sort(pointVec.begin(), pointVec.end(), pointCompare);
    

    for(int p = 0; p < n; p++){
        char hf, hb, vf, vb;
        if(pointVec[p].x > 0){hf = 'R'; hb = 'L';} else{hf = 'L'; hb = 'R';}
        if(pointVec[p].y > 0){vf = 'U'; vb = 'D';} else{vf = 'D'; vb = 'U';}
        long ht(labs(pointVec[p].x)), vt(labs(pointVec[p].y));
        if(ht > 0){printf("1 %ld %c\n", ht, hf);}
        if(vt > 0){printf("1 %ld %c\n", vt, vf);}
        puts("2");
        if(ht > 0){printf("1 %ld %c\n", ht, hb);}
        if(vt > 0){printf("1 %ld %c\n", vt, vb);}
        puts("3");
    }

    return 0;
}
