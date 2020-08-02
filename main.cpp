#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using std:: cout ;
using std:: cin ;
using std:: endl ;


int main() {

    double data[10][24][2]  ;

    srand((unsigned)time(NULL) ) ;

    // initialize the 1d data
    for(int i = 0;i < 10; i++){
        for(int j=0; j<24 ;j++){
            for(int h=0; h<2; h++){

                if( h ==0 )
                    data[i][j][h] = (100.0-70.0) * rand() / RAND_MAX + (70.0) ;
                else
                    data[i][j][h] = (1.0 - (0.1)) *rand() /RAND_MAX +(0.1) ;

                cout<< data[i][j][h] << "  "  ;
            }
            cout<< endl ;
        }
    }

    // calculate the
    for(int i = 0; i<9 ;i++){
        double select_day_temp = 0  ;
        double select_day_humidity = 0  ;
        for(int j=0;j<24; j++){
            for(int h=0; h<2 ;h++){

                if(h==0)
                    select_day_temp += data[i][j][h]  ;
                else
                    select_day_humidity += data[i][j][h] ;

            }

        }
        double temp_average = select_day_temp / 24 ;
        double humidity_average = select_day_humidity / 24 ;
        cout<< "Day:  " << i+1 << "'s average temperature is :  " << temp_average <<endl ;
        cout<< "Day:  " << i+1 << "'s average humidity is :  "<< humidity_average << endl ;
    }




    system("pause") ;




    return 0;
}





