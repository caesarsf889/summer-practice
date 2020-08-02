#include <iostream>
#include <ctime>
using std:: cin ;
using std:: cout ;
using std:: endl ;

// Sudoku
bool is_valid_whole(const int [][9], int i ,int j ) ;

bool is_valid_range_block(const int grid[][9]){
    for(int i=0; i<9;i++){
        for(int j=0;j <9;j ++){
            if(grid[i][j] < 1 || grid[i][j] || !is_valid_whole(grid,i,j)){
                return false  ;
            }
        }
    }
    return true ;
}

// is valid in  check i row
// is valid in  check j column
// is valid in check 3x3grid

bool is_valid_whole(const int grid[][9], int i,int j ){

    //check i row
    static int row_total = 0 ;

    for(int column =0 ; column <9 ;column++){
       if( column != j && grid[i][column] == grid[i][j] )
           return false  ;
    }

    //check j column
    for(int row=0 ; row<9 ; row++){
        if(grid[i][j]==grid[row][j] && row != i  )
            return false ;
    }

    // check whether grid[i][j] is valid
    for(int row= (i/3) * 3 ; row< (i/3)  * 3 +3  ; row++){
        for(int col = (j/3) * 3 ; col < (j/3) *3+3 ;col++ ){
            if(grid[i][j] == grid[row][col] && row !=i && col!=j)
                return false  ;
        }

    }

    return true  ;
}

void read_sudoku(int grid[][9]){
    srand((unsigned)time(NULL)) ;

    for(int i =0 ; i <9;i++ ){
        for(int j=0; j<9; j++){
             grid[i][j] = rand() % 10 ;
             cout<< grid[i][j] <<"  " ;
        }
        cout<<endl ;
    }

}


int main() {

    int grid[9][9] ;

    int test_array[9][9] = {

            {5,3,4,6,7,8,9,1,2},
            {6,7,2,1,9,5,3,4,8},
            {1,9,8,3,4,2,5,6,7},
            {8,5,9,7,6,1,4,2,3},
            {4,2,6,8,5,3,7,9,1},
            {7,1,3,9,2,4,8,5,6},
            {9,6,1,5,3,7,2,8,4},
            {2,8,7,4,1,9,6,3,5},
            {3,4,5,2,8,6,1,7,9}

    };

    read_sudoku(grid) ;

    cout<<endl << is_valid_range_block(test_array) <<endl  ;

    system("pause") ;


    return 0;
}








