//
//  main.cpp
//  bi-Section (Find the root)
//
//  Created by Rafsan Sahad on 5/19/24.
//

#include <iostream>
using namespace std;
#define EPSILON 0.01
double fun(double x){
    return x*x*x - x*x +2;
}
void biSection(double a, double b){
    
    if (fun(a)*fun(b)>=0) {
        cout<<"Put the right value for a & b\n"<<endl;
        return;
    }
    double c = 0.0;
    while ((b-a) >= EPSILON )
    {
        
        c=(a+b)/2;
        if(fun(c)==0){
            cout<<"Exact root found "<<fun(c)<<endl;
            return;}
        else if (fun(c)*fun(a)>0){
            b=c;}
        else{
            a=c;}
    }
    cout<<"The root Value :"<< c << endl;
}
int main(){
    double a=3,b=-3;
    biSection(a, b);
    return 0;
}













