# Water-Tank
A program that simulates the actions made on a water tank. These actions include filling, emptying and checking the volume within each tank.


##Choose Tank:
Once the program is compiled and ran you'll be prompted to enter the number of the tank you want to manipulate.
|Enter 1 or 2|
```
Enter # of tank: 
```
##Fill or Drain:
Now that you've chosen a tank you'll choose weather to fill or drain it.
|Enter F or D|
```
Enter F/f to fill or D/d to drain:
```
##Amount of Liters:
Next you must enter the amount of liters you want to fill in the tank or drain from the tank.
```
Enter amount of liters to fill tank:
```
##Result:
Finally you'll be shown the volume of the tank you filled or drained along with a tank comparison message. An example of this output looks like this.
```
Tank 1 after filling:
Volume: 73
Max Capacity: 75

Tank 1 has greater volume than tank 2.
```
##Compile and Run
```
g++ main.cpp waterTank.cpp -o watertank
./watertank
```
