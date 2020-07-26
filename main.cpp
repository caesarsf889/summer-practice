#include <iostream>
#include <string>
#include <ctime>
using std:: cout ;
using std:: cin ;
using std:: endl ;


int main() {

    const int number_of_card = 52 ;
    int deck_of_card[number_of_card];
    std::string  suit[] = {"spade", "heart", "diamond" , "clubs"};
    std::string  rank[] = {"Ace", "1", "2", "3", "4", "5" ,"6" , "7", "8" ,"9", "10","Jack","Queen", "King"  };

    // initialize the cards
    for(int i =0; i<number_of_card;i++){
        deck_of_card[i] = i ;
    }

    //shuffle cards
    srand((unsigned)time(NULL)) ;

    for(int i =0; i<number_of_card;i++){
        int reg_index = rand()%number_of_card ;
        int reg = deck_of_card[i] ;
        deck_of_card[i] = deck_of_card[reg_index] ;
        deck_of_card[reg_index] = reg ;
    }


    for(int i =0; i<4; i++){
        std::string suits = suit[deck_of_card[i] / 13 ] ;
        std::string ranks = rank[deck_of_card[i]% 13 ] ;
        cout<< "card number is   " << ranks <<"    card suit is " << suits <<endl ;

    }





    system("pause")  ;


    return 0;
}
