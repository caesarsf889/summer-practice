#include <iostream>
#include <ctime>
#include <cmath>

using std:: cout ;
using std:: cin ;
using std:: endl  ;

double get_distance(int x1, int y1, int x2, int y2){

    double short_distance = sqrt((x2 -x1) * ( x2 -x1 ) + (y2-y1) * (y2 - y1)) ;
    return short_distance ;
}

int main() {
    const int num_of_point = 8 ;
    const int column_size = 2 ;
    double point[num_of_point][column_size] ;

    srand((unsigned)time(NULL)) ;
    for(int i =0 ; i < num_of_point; i++){
        cout<< i<< "  :  " ;
        for(int j =0 ; j <column_size ;j++ ){
            point[i][j] = rand()%69 ;
            cout<< point[i][j] <<"  " ;
        }
        cout<< endl   ;
    }

    // initialize the short_distance  ;
    int near_point_1 = 0 , near_point_2 =1 ;

    double short_distance = get_distance(point[near_point_1][0] ,point[near_point_1][1], point[near_point_2][0], point[near_point_2][1]) ;


    for(int i =0; i< num_of_point;i++){
        for(int j= i+1; j<num_of_point;j++){
            double distance = get_distance(point[i][0], point[i][1], point[j][0], point[j][1]) ;
            if(distance < short_distance ){
                short_distance = distance ;
                near_point_1 = i ;
                near_point_2 = j ;
            }
        }
    }

    cout<< "the nearest two point :  " << point[near_point_1][0] <<" ," <<point[near_point_1][1] << "and " <<
        point[near_point_2][0] <<" , " <<point[near_point_2][1] <<endl ;

    system("pause") ;

    return 0;
}









