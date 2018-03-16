#include <cstdio>

bool yangWins(int hy, int ay, int dy, int hm, int am, int dm){
    //Easy to solve in O(1), but not worth the time figuring out the corner cases
    if((am <= dy) && (ay <= dm)){return false;}
    while((hy > 0) && (hm > 0)){
        hy -= ((am > dy) ? (am - dy) : 0);
        hm -= ((ay > dm) ? (ay - dm) : 0);
    }

    return (hy > 0);
}

bool check (int hy, int ay, int dy, int hm, int am, int dm, int hc, int ac, int dc, int budget){

    for(int hbuy = 0; hbuy <= (budget / hc); hbuy++){
        for(int abuy = 0; abuy <= (budget / ac); abuy++){
            for(int dbuy = 0; dbuy <= (budget / dc); dbuy++){
                if(hbuy * hc + abuy * ac + dbuy * dc > budget){continue;}
                if(ac + abuy <= dm){continue;}
                if(yangWins(hy + hbuy, ay + abuy, dy + dbuy, hm, am, dm)){return true;}
            }
        }
    }

    return false;
}

int main(){

    int hy, ay, dy; scanf("%d %d %d\n", &hy, &ay, &dy);
    int hm, am, dm; scanf("%d %d %d\n", &hm, &am, &dm);
    int hc, ac, dc; scanf("%d %d %d\n", &hc, &ac, &dc);

    long left(0), right(1e7);
    while(left <= right){
        int mid = (left + right) / 2;
        if(check(hy, ay, dy, hm, am, dm, hc, ac, dc, mid)){right = mid - 1;}
        else{left = mid + 1;}
        printf("Left%ld %ld Mid:%ld\n", left, right, mid);
    }

    printf("%ld\n", left);

    return 0;
}
