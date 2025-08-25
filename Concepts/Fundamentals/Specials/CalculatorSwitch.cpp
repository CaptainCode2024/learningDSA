// basic calculator program, using switch case

#include <iostream>
using namespace std;

int main(){

    while (true){
        
        cout <<"---------- Calculator Program ----------" <<endl; 
        cout <<"Addition (+)" <<endl;
        cout <<"Subtraction (-)" <<endl;
        cout <<"Multiplication (*)" <<endl;
        cout <<"Division (/)" <<endl;
        cout <<"Exit (0)" <<endl;

        char c;
        cout <<"Enter your choice: "; cin >>c;

        if (c == '0'){
            cout <<"Program quitted." <<endl;
            break;
        } else{
            
            double x;
            cout <<"Enter 1st operand (num, double): "; cin >>x;

            double y;
            cout <<"Enter 2nd operand (num, double): "; cin >>y;

            switch(c){
                case '+':
                    cout <<(x + y) <<endl; break;

                case '-':
                    cout <<(x - y) <<endl; break;

                case '*':
                    cout <<(x * y) <<endl; break;

                case '/':
                    if (y == 0){
                        cout << "Can't divide by zero." <<endl; break;
                    } else{
                        cout <<(x / y) <<endl; break;
                    }
            }
        }
    }
}