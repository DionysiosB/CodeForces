#include <cstdio>
int main(){
    int n,m,c[51];long long t(1); 
    scanf("%d %d\n",&n,&m);
    for(int p=1;p<=n;p++){c[p]=p;}
    while(m--){
        int a,b;scanf("%d %d",&a,&b);
        while(c[a]!=a || b!=c[b]){a=c[a];b=c[b];}
        if(a!=b) t*=2;
        c[b]=a;
    }
    printf("%lld\n",t);
}
