#include <iostream>
#include <ctime>

using std:: cout ;
using std:: cin ;
using std:: endl ;


int main() {

    const int num_of_student = 8 ;
    const int num_of_question = 10 ;
    char answer[num_of_student][num_of_question] ;

    srand((unsigned)time(NULL)) ;

    for(int i=0; i<num_of_student;i++){
        for(int j=0; j<num_of_question; j++){
            answer[i][j] = static_cast<char>('a'+ rand()%('e'-'a'+1)) ;
            cout<< answer[i][j]  <<"  "  ;
        }
        cout<< endl <<endl ;
    }

    char keys[] = {'d','b','d','c','c','d','a','e','a','d'};

    for(int i =0;i< num_of_question;i++){
        cout<< keys[i] <<"  "  ;
    }
    cout<< endl ;

    for(int i =0 ;i< num_of_student;i++){
        int get_score = 0 ;

        for(int j=0; j<num_of_question; j++){

        if(answer[i][j]==keys[j])
            get_score++ ;

        }
        cout<< "student : " <<i << "get   " << get_score ;
        cout<<endl  ;
    }




    system("pause") ;
    return 0;
}













