// understanding switch case

#include <iostream>
using namespace std;

int main(){

    int x; cout <<"Enter x: "; cin >>x;  // input

    // break statement prevents the fall-through behaviour
    switch(x){

        case 1: 
            cout <<"One" <<endl;
            break;
        
        case 2: 
            cout <<"Two" <<endl;
            break;
        
        case 3: 
            cout <<"Three" <<endl;
            break;

        default: 
            cout <<"Zero" <<endl;

    }


    int y; cout <<"Enter y: "; cin >>y;


    switch(y){

        // executed if any one case matches
        case 1: case 2: case 3:
            cout <<"1/2/3" <<endl;
            break;

        default:
            cout <<"Zero" <<endl;
    }

    while (true){

        int z; cout <<"Enter z: "; cin >>z;

        switch(z){

            case 1: 
                cout <<"One" <<endl;
                break;
        
            case 2: 
                cout <<"Two" <<endl;
                break;
        
            case 3: 
                cout <<"Three" <<endl;
                break;

            default:
                // to terminate the infinte loop as 'break' won't work
                exit(0);  // terminates the entire program
        }
    }

    return 0;
}