//
//  main.cpp
//  Lab3.2
//
//  Created by Oleksiy Lopatskiy on 19.10.2020.
//

#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    double x;
    double a;
    double b;
    double c;
    double F;
    
    cout<<"a=";cin >>a; cout<<"b=";cin >>b; cout<<"c=";cin >>c; cout<<"x=";cin >>x;
    
    if(a<0&&x!=0)F=a*pow(x,2)+pow(b,2)*x;
    if(a<0&&x!=0)F=x-(a/(x-c));
    if(!((a<0&&x!=0)&&(a>0&&x==0)))x/c;
    cout << endl;
    cout << "1) F = " << F << endl;
    
    if(a<0&&x!=0)F=a*pow(x,2)+pow(b,2)*x;
    else if (a>0&&x==0)F=x-(a/(x-c));
    else x/c;
    cout << endl;
    cout << "2) F = " << F << endl;
    
    
    return 0;
}
