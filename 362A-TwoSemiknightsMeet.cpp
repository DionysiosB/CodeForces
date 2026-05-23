#include <cstdio>

int main(){

    const int N = 8;
    int numCases(0); scanf("%d\n", &numCases);

    while(numCases--){
        bool first(0), second(0);
        int rowFirst(0), colFirst(0), rowSecond(0), colSecond(0);
        char temp('a');

        for(int row = 0; row < N; row++){
            for(int col = 0; col < N; col++){
                scanf("%c", &temp);
                if(temp == 'K'){
                    if(!first){rowFirst = row; colFirst = col; first = 1;}
                    else if(!second){rowSecond = row; colSecond = col; second = 1;}
                }
            }
            scanf("\n");
        }

        if( ((rowFirst - rowSecond) % 4 == 0) && ((rowFirst - rowSecond) % 4 == (colFirst - colSecond) % 4)){puts("YES");} else puts("NO");

    }

    return 0;
}
