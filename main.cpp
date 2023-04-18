#include <iostream>
#include <cmath>
using namespace std;
//QUESTION-1'S METHODS
double calculateFactorial(int num){
    if(num==0) return 1;
    return num * calculateFactorial(num - 1);
}
double calculateExponential(int n, int x){
    if(x==0) return 1;
    return (pow(n,x)/calculateFactorial(x))+calculateExponential(n,x - 1);
}
double solveEquation(int n){return calculateExponential(n, 10);}
//QUESTION-2'S METHODS
double calculateExponential(int x){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    if(x==0) return 1;
    return (pow(n,x)/calculateFactorial(x))+calculateExponential(x-1);
}
double solveEquation(){return calculateExponential(5);}

int main(){
//QUESTION-1
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    double result=solveEquation(n);
    cout<<"Result: "<<result<< endl;
//QUESTION-2
    result=solveEquation();
    cout<<"Result: "<<result<< endl;
}