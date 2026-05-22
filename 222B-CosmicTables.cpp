#include <cstdio>
#include <vector>

int main(){
    
    long n(0), m(0), k(0); scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<std::vector<long>> data(n,std::vector<long>(m,0));

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            long temp(0); scanf("%ld", &temp);
            data[row][col] = temp;
        }
        scanf("\n");
    }

    std::vector<long> currentRow(n,0); for(long row = 0; row < n; row++){currentRow[row] = row;}
    std::vector<long> currentCol(m,0); for(long col = 0; col < m; col++){currentCol[col] = col;}

    while(k--){
        char action('a'); long left(9), right(9);
        scanf("%c %ld %ld\n", &action, &left, &right);
        --left; --right;

        if(action == 'r'){
            long temp = currentRow[left];
            currentRow[left] = currentRow[right];
            currentRow[right] = temp;
        }
        else if(action == 'c'){
            long temp = currentCol[left];
            currentCol[left] = currentCol[right];
            currentCol[right] = temp;
        }
        else if(action == 'g'){printf("%ld\n", data[currentRow[left]][currentCol[right]]);}
    }

    return 0;
}
