#include <iostream>
using std:: cout ;
using std:: cin ;
using std:: endl ;

// practice how to pass array to the function

void reverse_list(const int list[] ,int list2[], int list_size){

    for(int i=0, j =list_size -1; i< list_size ;i++,j-- ){
        list2[j] = list[i] ;
    }

}

void print_list(int list[],int size){

    for(int i =0;i<size;i++){

        cout<<list[i] <<" " ;
    }

}

int main() {

    const int size = 6 ;
    int array1[] = {1,2,3,4,5,6};
    int array2[size] ;

    reverse_list(array1,array2,size) ;

   print_list(array1,size) ;
   cout<<endl ;
   print_list(array2,size) ;


    system("pause") ;

    return 0;
}



