#ifndef WATERTANK_H
#define WATERTANK_H

using namespace std;

class waterTank {
public:
    waterTank(int, int);
    //constructor with parameters
    void fill();
    //function that allows you to enter amount of gallons to fill water
    //tank
    void drain();
    //function allows you to enter amount of gallons to drain from water
    //tank
    void isEmpty() const;
    //function that checks if water tank is empty
    void printTank() const;
    //function that prints the values of the tank when called
    bool operator==(const waterTank& other) const;
    //function to overload the operator ==
    bool operator<(const waterTank& other) const;
    //function to overload the operator <
    bool operator>(const waterTank& other) const;
    //function to overload the operator >
private:
    double volume;
    double maxCap;
};

#endif