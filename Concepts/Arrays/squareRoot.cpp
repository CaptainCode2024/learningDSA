// program to compute the square root of a number upto specified decimal places

#include <iostream>
using namespace std;

int sqrtInt(int x) {
            
    // using binary search
    
    int start = 0, end = x;
    int mid = start + (end - start) / 2;

    int rootInt = 0;
    int square;

    while (start <= end) {

        square = mid * mid;

        if (square == x) {
            rootInt = mid;
            break;
        }
        else if (square > x) {
            end = mid - 1;  // any y >= mid can't be the root 
        }
        else {
            rootInt = mid;  // might be the root
            start = mid + 1;
        }

        mid = start + (end - start) / 2;

    }

    return rootInt;
}

// d = no. of decimal places
double sqrtDecimal(int x, int d) {

    int rootInt = sqrtInt(x);
    double root = rootInt;  // initial
    double step = 1.0;

    for (int i = 1; i <= d; i++) {
        //double val = pow(10, -i);
        step /= 10.0;

        for (int j = 1; j < 10; j++) {

            double square = (root + step) * (root + step);

            if (square <= x) {
                root += step;
            }
            else {
                break;
            }
        }
    }

    return root;

}


int main() {

    int n; cout <<"Enter the number: "; cin >>n;
    int d; cout <<"Enter the decimal places: "; cin >>d;

    cout <<"Square Root: " <<sqrtDecimal(n, d) <<endl;

    return 0;
}