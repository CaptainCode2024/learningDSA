// to find out how many 100, 50, 20 & 1 rupee(s) note(s) are required for a given amount.
// using switch case

#include <iostream>
using namespace std;

int main(){

    int amount;
    cout <<"Enter the amount: "; cin >>amount;

    int n100, n50, n20, n1;  // no. of notes
    n100 = n50 = n20 = n1 = 0;  // initialize

    switch(1){
        case 1:
        n100 = amount/100;
        amount %= 100;
        if (amount == 0){break;}
        
        case 2:
        n50 = amount/50;
        amount %= 50;
        if (amount == 0){break;}

        case 3:
        n20 = amount/20;
        amount %= 20;
        if (amount == 0){break;}
        
        default:
        n1 = amount;
        break;
    }    

    cout <<"Number of notes required: -" <<endl;
    cout <<"Hundred: " <<n100 <<endl;
    cout <<"Fifty: " <<n50 <<endl;
    cout <<"Twenty: " <<n20 <<endl;
    cout <<"One: " <<n1 <<endl;

    return 0;
}