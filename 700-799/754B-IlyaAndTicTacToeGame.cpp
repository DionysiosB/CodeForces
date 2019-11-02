#include <iostream>
#include <vector>

int main(){

    const int N = 4;
    std::vector<std::string> b(N);
    for(int p = 0; p < N; p++){std::cin >> b[p];}

    bool res(false);
    for(int row = 0; row < N; row++){
        if(res){break;}
        for(int col = 0; col < N - 2; col++){
            if(res){break;}
            res = (b[row][col] == 'x' && b[row][col + 1] == 'x' && b[row][col + 2] == 'x') || 
                  (b[row][col] == 'x' && b[row][col + 1] == 'x' && b[row][col + 2] == '.') || 
                  (b[row][col] == 'x' && b[row][col + 1] == '.' && b[row][col + 2] == 'x') || 
                  (b[row][col] == '.' && b[row][col + 1] == 'x' && b[row][col + 2] == 'x');
        }
    }

    for(int col = 0; col < N; col++){
        if(res){break;}
        for(int row = 0; row < N - 2; row++){
            if(res){break;}
            res = (b[row][col] == 'x' && b[row + 1][col] == 'x' && b[row + 2][col] == 'x') || 
                  (b[row][col] == 'x' && b[row + 1][col] == 'x' && b[row + 2][col] == '.') || 
                  (b[row][col] == 'x' && b[row + 1][col] == '.' && b[row + 2][col] == 'x') || 
                  (b[row][col] == '.' && b[row + 1][col] == 'x' && b[row + 2][col] == 'x');
        }
    }

    for(int p = 0; p < N - 2; p++){
        if(res){break;}
        res = (b[p][p] == 'x' && b[p + 1][p + 1] == 'x' && b[p + 2][p + 2] == 'x') || 
              (b[p][p] == 'x' && b[p + 1][p + 1] == 'x' && b[p + 2][p + 2] == '.') || 
              (b[p][p] == 'x' && b[p + 1][p + 1] == '.' && b[p + 2][p + 2] == 'x') || 
              (b[p][p] == '.' && b[p + 1][p + 1] == 'x' && b[p + 2][p + 2] == 'x');
    }

    for(int p = 0; p < N - 2; p++){
        if(res){break;}
        res = (b[p][N - p - 1] == 'x' && b[p + 1][N - p - 2] == 'x' && b[p + 2][N - p + 3] == 'x') || 
              (b[p][N - p - 1] == 'x' && b[p + 1][N - p - 2] == 'x' && b[p + 2][N - p - 3] == '.') || 
              (b[p][N - p - 1] == 'x' && b[p + 1][N - p - 2] == '.' && b[p + 2][N - p - 3] == 'x') || 
              (b[p][N - p - 1] == '.' && b[p + 1][N - p - 2] == 'x' && b[p + 2][N - p - 3] == 'x');
    }


    res = res ||
          (b[0][1] == 'x' && b[1][2] == 'x' && b[2][3] == 'x') || 
          (b[0][1] == '.' && b[1][2] == 'x' && b[2][3] == 'x') || 
          (b[0][1] == 'x' && b[1][2] == '.' && b[2][3] == 'x') || 
          (b[0][1] == 'x' && b[1][2] == 'x' && b[2][3] == '.') ||

          (b[1][0] == 'x' && b[2][1] == 'x' && b[3][2] == 'x') ||
          (b[1][0] == '.' && b[2][1] == 'x' && b[3][2] == 'x') ||
          (b[1][0] == 'x' && b[2][1] == '.' && b[3][2] == 'x') ||
          (b[1][0] == 'x' && b[2][1] == 'x' && b[3][2] == '.') ||

          (b[0][2] == 'x' && b[1][1] == 'x' && b[2][0] == 'x') ||
          (b[0][2] == '.' && b[1][1] == 'x' && b[2][0] == 'x') ||
          (b[0][2] == 'x' && b[1][1] == '.' && b[2][0] == 'x') ||
          (b[0][2] == 'x' && b[1][1] == 'x' && b[2][0] == '.') ||

          (b[1][3] == 'x' && b[2][2] == 'x' && b[3][1] == 'x') ||
          (b[1][3] == '.' && b[2][2] == 'x' && b[3][1] == 'x') ||
          (b[1][3] == 'x' && b[2][2] == '.' && b[3][1] == 'x') ||
          (b[1][3] == 'x' && b[2][2] == 'x' && b[3][1] == '.');

    std::cout << (res ? "YES" : "NO") << std::endl;

    return 0;
}
