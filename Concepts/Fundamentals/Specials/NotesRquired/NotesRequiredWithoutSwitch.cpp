// to find out how many 100, 50, 20 & 1 rupee(s) note(s) are required for a given amount.

#include <iostream>
using namespace std;

int main(){

    int amount;
    cout <<"Enter the amount: "; cin >>amount;

    int n100, n50, n20, n1;  // no. of notes

    n100 = amount/100; amount %= 100;
    n50 = amount/50; amount %= 50;
    n20 = amount/20; amount %= 20;
    n1 = amount;  

    cout <<"Number of notes required: -" <<endl;
    cout <<"Hundred: " <<n100 <<endl;
    cout <<"Fifty: " <<n50 <<endl;
    cout <<"Twenty: " <<n20 <<endl;
    cout <<"One: " <<n1 <<endl;

    return 0;
}