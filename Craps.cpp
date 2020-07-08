#include <iostream>
#include<cstdlib>
#include<time.h>
using std:: cout ;
using std:: cin ;
using std:: endl ;
using std:: string ;

int check(int store[] ){

    if(store[2] == 7 ||store[2]== 11 ){
        return 0 ;
    }
    else if (store[2] ==2 || store[2]==3 || store[2]== 12 ){

        return 1 ;
    }
    else{
        return 2   ;
    }

}

int craps(int store[]){



srand((unsigned)time(NULL))  ;

for(int i =0 ; i<=1 ;i++ ){

    store[i] = rand()%7;
}
store[2]  = store[0] + store[1]  ;
cout <<"you rolled:  " << store[0] << " + " << store[1] << " = " << store[2] << endl  ;



}

int check_2(int store_2[],int store[] ){

    if(store_2[2]== store[2]){
        return 0 ;
    }
    else if (store[2] == 7 ){

        return 1 ;
    }
    else{
        return 3   ;
    }

}



int main() {
    //string win = "win" ;
    //string lose = "lose" ;
    int store[6] = {0,0,0,0,0,0};
    int store_2[3] = {0,0,0};
    string result_array[] = {"win" , "lose","again", "not win not lose"};
    craps(store) ;
    int result = check(store) ;

    cout<< result_array[result] <<endl ;


    if(result ==2){
        system("pause") ;
        craps(store_2) ;
        int result_2 = check_2(store,store_2) ;
        cout<< result_array[result_2] <<endl ;

    }





    system("pause") ;

    return 0;
}
