#include <iostream>
#include<ctime>

using std:: cout ;
using std:: cin ;
using std:: endl ;



int main() {
    const int size = 99 ;
    bool check_array[size] ;
    int test_array[size]  ;
    bool cover_array[size] ;
    int num ;
    bool all_cover ;


    // initialize
    for(int i =0 ; i< size ;i++ ){
        check_array[i] = false ;
    }

    for(int i =0 ;i< size ;i++ ){
        cover_array[i]  = true ;
    }

    srand((unsigned)time(NULL))  ;

    for(int i =0 ;i < size; i++ ){
        test_array[i]  = rand()%100  ;

    }

    for(int i =0 ;i<size; i++ ){
        cout<< test_array[i] << "  " ;
        if ( i%10 == 0 )
            cout<<endl ;

    }
    cout<<endl ;

    for( int i =0 ; i<size; i++ ){
        int reg = 0 ;
        reg = test_array[i] ;
        check_array[reg-1] = true ;
    }

    for(int i =0 ;i<size ; i++){

        cout<< i+1 << " = "<<check_array[i] << "  " ;
        if( i%10 == 0)
            cout<<endl ;
    }

    all_cover = true ;

    for(int i =0 ; i<size ; i++){
        if(!check_array[i]){
            all_cover = false ;
            break ;
        }
    }
    if(all_cover)
        cout<<"all cover" <<endl ;
    else
        cout<< "don't cover all " <<endl ;


    system("pause") ;







    return 0;
}
