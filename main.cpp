#include <iostream>
#include "waterTank.h"

using namespace std;

int main() {
    int vlm1 = 63, vlm2 = 29;
    int mxc1 = 75, mxc2 = 75;
    char tempCh;
    int tempNum;
    
    waterTank tank1(vlm1, mxc1);
    waterTank tank2(vlm2, mxc2);
    
    cout<<"Tank 1\n";
    tank1.printTank();
    cout<<"Tank 2\n";
    tank2.printTank();
    
    cout<<"Enter # of tank: ";
    cin>>tempNum;
    cout<<endl;
    
    if (tempNum == 1) {
    cout<<"Enter F/f to fill or D/d to drain: ";
    cin>>tempCh;
    cout<<endl;
    switch (tempCh) {
        case 'f':
        case 'F':
        tank1.fill();
        break;
        case 'd':
        case 'D':
        tank1.drain();
        break;
        default:
        cout<<"Invalid character entered."<<endl;;
        break;
    }
    } else if (tempNum == 2) {
        cout<<"Enter F/f to fill or D/d to drain: ";
    cin>>tempCh;
    cout<<endl;
    switch (tempCh) {
        case 'f':
        case 'F':
        tank2.fill();
        break;
        case 'd':
        case 'D':
        tank2.drain();
        break;
        default:
        cout<<"Invalid character entered."<<endl;
        break;
    }
    } else 
    cout<<"Invalid number entered."<<endl;
    
    if (tank1 == tank2)
    cout<<"Both tanks are equal.";
    else if (tank1 > tank2)
    cout<<"Tank 1 has greater volume than tank 2.";
    else
    cout<<"Tank 2 has a greater volume than tank 1.";
    
    return 0;
}