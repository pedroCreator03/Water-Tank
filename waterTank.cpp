#include "waterTank.h"
#include <iostream>

using namespace std;


    waterTank::waterTank(int vlm, int mxc) {
        volume = vlm;
        maxCap = mxc;
    }
    void waterTank::fill() {
        int fillAm;

        cout<<"Enter amount of liters to fill tank: ";
        cin>>fillAm;
        cout<<endl;

           volume = volume + fillAm;
           if (volume <= maxCap) {
           cout<<"Tank 1 after filling:\n";
           printTank();
          } else 
           cout<<"ERROR:Fill amount cannot exceed max capacity.\n"<<"Re-run program.";
    }
    void waterTank::drain() {
        int drainAm;
        
        cout<<"Enter amount of liters to drain from tank: ";
        cin>>drainAm;
        cout<<endl;

        volume = volume - drainAm;
        if (volume > 0) {
        cout<<"Tank 1 after draining:\n";
        printTank();
    }    else if (volume == 0)
        isEmpty();
        else
        cout<<"ERROR:Cannot drain tank more than 0.\n"<<"Re-run program.";
    }
    void waterTank::isEmpty() const {
        if (volume == 0)
            cout<<"Tank is empty."<<'\n';
    }
    void waterTank::printTank() const {
         cout<<"Volume: "<<volume<<'\n';
        cout<<"Max Capacity: "<<maxCap<<'\n';
        cout<<endl;
    }
    bool waterTank::operator==(const waterTank& other) const {
        return this->volume == other.volume;
        return this->maxCap == other.maxCap;
    }
    bool waterTank::operator<(const waterTank& other) const {
        return this->volume < other.volume;
    }
    bool waterTank::operator>(const waterTank& other) const {
        return this->volume > other.volume;
    }