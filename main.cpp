#include <iostream>
int FindSmallestNUmber(int number);
using namespace std;

int main() {




    return 0;
}


int FindSmallestNUmber(int number){

    int counter = 0;

    for(int i = 1 ; i <= 20 ; i++ ){


        if(number % i == 0 ){
            counter++;

        }else{
             counter = 0;
            return -1;
        }

        if(counter == 20){

            cout<< number << endl;
            return true;
        }

    return -1;
    }


}