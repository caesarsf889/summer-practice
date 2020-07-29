#include <iostream>
using std:: cin ;
using std:: cout ;
using std:: endl ;




int main() {

    int i = 2 + 'a'  ;
    cout<< i <<endl ;

    cout<<"i is ASCII code for char " << static_cast<char>(i) <<endl ;
    // convert the num to the cahr

    char c =62.5 ;
    cout<< c ;

    char city[30] ;
    cin.getline(city,30) ;
    cout<< city <<endl ;

    char fuck_city[7];
    cout<<endl ;
    cin>> fuck_city ;
    cout<< fuck_city ;




    system("pause") ;


    return 0;
}



