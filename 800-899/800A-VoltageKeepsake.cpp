#include <cstdio>
#include <vector>


bool check(const std::vector<double> &rate, const std::vector<double> &saved, const double &provided, double time){

    double req(0.0);
    for(long p = 0; p < rate.size(); p++){
        if(saved[p] > rate[p] * time){continue;}
        req += (rate[p] - saved[p] / time);
    }

    return (req <= provided);
}


int main(){

    const double eps = 0.00001;
    long n; double pow; scanf("%ld %lf", &n, &pow);
    std::vector<double> a(n), b(n);
    for(long p = 0; p < n; p++){scanf("%lf %lf", &a[p], &b[p]);}

    double sumPower(0);
    for(long p = 0; p < n; p++){sumPower += a[p];}
    if(sumPower <= pow){puts("-1"); return 0;}

    double left(0), right(1e10 + 1e7);
    while(right - left > eps){
        double mid = (left + right) / 2.0;
        if(check(a, b, pow, mid)){left = mid;}
        else{right = mid;}
    }

    printf("%.5lf\n", (left + right) / 2.0);

    return 0;
}


// #include<cstdio>
// const int N=100005;
// long long s;
// int n,p,a[N],b[N],i;
// double l,m,r,x,y,t;
// int main(){
//     scanf("%d%d",&n,&p);
//     for(i=1;i<=n;++i)scanf("%d%d",a+i,b+i),s+=a[i];
//     if(s<=p)return puts("-1"),0;l=0;r=1e18;
//     for(;r-l>1e-7;){
//         m=(l+r)/2;x=m*p;
//         for(i=1;i<=n;++i){
//             t=b[i]*1.0/a[i];
//             if(t<m)x-=(m-t)*a[i];
//             if(x<0)break;
//         }
//         if(i>n)l=m;
//             else r=m;
//     }
// //     printf("%.5f\n",l);
//     return 0;
// }
// short another solution
