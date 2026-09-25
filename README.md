# Red-Green Assesability Checker

## Description

**version 1.0**

Program takes the RGB values of two colors and evalutes whether
or not the colors will be hard to distinguish for someone with
Red-Green color blindness.


## Developer

Michael Peccorini

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Red-Green Color Accessibility Checker

Enter the RGB values for Color 1.
Red (0-255): 100
Green (0-255): 50
Blue (0-255): 150

Enter the RGB values for Color 2.
Red (0-255): 200
Green (0-255): 175
Blue (0-255): 120

These colors may be easier to distinguish.

Would you like to test another pair of colors?
1. Yes
2. No
Enter your choice(1/2): 2

Program ended.
```