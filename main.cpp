#include <iostream>
int FindSmallestNUmber(int number);
using namespace std;

int main() {

    for (int i = 0; i <= 9999999999; i++) {

        FindSmallestNUmber(i);
    }
    return 0;
}


int FindSmallestNUmber(int number) {

    int counter = 0;

    for (int i = 1; i <= 20; i++) {


        if (number % i == 0) {
            counter++;
          //  cout << counter << endl;
        } else {
            counter = 0;
            return -1;
        }

        if (counter == 20) {

            cout << number << endl;
            system("pause>0");
            return true;
        }


    }

    return -1;
}