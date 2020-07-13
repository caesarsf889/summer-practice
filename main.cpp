#include <iostream>
#include <iomanip>
using std:: cout ;
using std:: cin  ;
using std:: endl ;

void print_month(int year, int month) ;
void print_month_title(int year, int month ) ;
void print_month_name(int  month ) ;
void print_month_body(int year, int month ) ;
int get_start_day(int year, int month) ;
int get_total_number_of_days(int year, int month ) ;
int get_number_of_days_in_month(int year, int month ) ;
bool is_leap_year(int year ) ;






int main() {

    cout << "enter full year   "  ;
    int year ;
    cin >> year ;

    cout<< "enter month  "  ;
    int month ;
    cin >> month ;

    print_month(year,  month) ;




    system("pause") ;



    return 0;
}

void print_month(int year, int month){

    cout<< year <<"   " << month <<endl ;
    print_month_title(year,month) ;
    print_month_body(year, month) ;


}

void print_month_title(int year ,int month){

    print_month_name(month);
    cout<< " " << year << endl ;
    cout<< "-----------------------------" <<endl ;
    cout<<"Sun Mon Tue Wed Thu Fri Sat " <<endl ;




}


void print_month_name(int month){

    switch(month){

        case 1 :
            cout<<"January" ;
            break ;
        case 2 :
            cout<<"February" ;
            break ;
        case 3:
            cout<<"march" ;
            break ;
        case 4 :
            cout<<"april" ;
            break ;

        case 5 :
            cout<<" may" ;
            break ;

        case 6 :
            cout<< "june" ;
            break ;

        case 7 :
            cout<< "july" ;
            break ;

        case 8:
            cout<< "august" ;
            break ;

        case 9 :
            cout<< "september" ;
            break ;

        case 10 :
            cout<< "october" ;
            break ;

        case 11 :
            cout<< "november"  ;
            break ;

        case 12  :
            cout<< "december" ;
            break ;

    }


}

void print_month_body(int year ,int month){

    int start_day = get_start_day(year, month) ;

    int number_of_days_in_month = get_number_of_days_in_month(year , month ) ;

    int i  = 0 ;

    for(int i =0 ;i < start_day ; i++){
        cout << " "  ;
    }

    for (int i =1 ; i <number_of_days_in_month ; i++ ){

       cout<< i   ;
       if((i+start_day) % 7 == 0)
           cout<<endl ;

    }

}





bool is_leap_year(int year){

    return ( year % 400==0 || ( year%4==0  && year %100 !=0 )) ;



}

int get_start_day(int year ,int month){

    int start_day_1800 = 3 ;
    int total_number_of_days = get_total_number_of_days(year,month)  ;



    return (total_number_of_days + start_day_1800) % 7 ;


}

int get_total_number_of_days(int year ,int month){

    int total = 0 ;
    // get the total days from 1800 to year - 1
    for(int i =1800 ; i < year; i ++ ){
        if(is_leap_year(i))
            total = total + 366 ;
        else
            total = total + 365 ;
    }

    for(int i = 1 ; i < month ; i++ )
        total = total + get_number_of_days_in_month(year, month) ;

    return total  ;
}

int get_number_of_days_in_month(int year ,int month ){

    if(month ==1|| month==3 || month ==5 || month==7 || month==8 || month==10){
        return 31 ;
    }

    if (month==4 || month==6 || month==9){
        return 30 ;
    }

    if(month==2){
        return is_leap_year(year) ?  29 :28 ;
    }

    return 0  ;
}









