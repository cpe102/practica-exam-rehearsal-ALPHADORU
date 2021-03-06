#include <iostream>
using namespace std;

//Write sumSqrt() here.
double sumSqrt(double N){
    double sum=0;
    double i=0;
    if(N <= 0){
        return 0;
    }else{
        while(i < N){
            sum = sum + 1/i^1/2;
            i++;
        }
    }
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
