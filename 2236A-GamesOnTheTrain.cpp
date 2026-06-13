#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mnh(100), mxh(0);
        while(n--){
            long h; scanf("%ld", &h);
            mnh = (mnh < h ? mnh : h);
            mxh = (mxh > h ? mxh : h);
        }

        long diff = mxh + 1 - mnh;
        printf("%ld\n", diff);

    }

}
