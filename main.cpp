#include <iostream>
#include <iomanip>
using namespace std;

const int W11 = 11;

class Color 
{
    private:
        int red;
        int green;
        int blue;

    public:
        // Constructors
        Color () { red = 0; green = 0; blue = 0; }
        Color (int r) { red = r; green = 0; blue = 0; }
        Color (int r, int g, int b) { red = r; green = g; blue = b; }
        // Getters and Setters
        int getRed() const { return red; }
        int getGreen() const { return green; }
        int getBlue() const { return blue; }
        void print() const {
            cout << setw(W11) << "Red: " << red << endl; 
            cout << setw(W11) << "Green: " << green << endl;
            cout << setw(W11) << "Blue: " << blue << endl << endl;
        }
    };

int main()
{
    cout << fixed << setprecision(2);

    //Default constructor
    Color color1;
    color1.print();

    //Parial constructor
    Color color2(128);
    color2.print();

    //Full constructor
    // Red
    Color color3(255, 0, 0);
    color3.print();

    // Green
    Color color4(0, 255, 0);
    color4.print();

    // Blue
    Color color5(0, 0, 255);
    color5.print();

    // White
    Color color6(255, 255, 255);
    color6.print();

    // Black
    Color color7(0, 0, 0);
    color7.print();

    // Yellow
    Color color8(255, 255, 0);
    color8.print();

    return 0;
}




/* 
// Comment #1: Define a constant for formatting output.
const int W11 = 11;

// Comment #2: Define the Color class with private attributes and public methods.
class Color 
{
    // Comment #3: Private attributes for RGB components.
    private:
        int red;
        int green;
        int blue;

    // Comment #4: Public methods to get and set RGB values, and to print the color.
    public:
        int getRed() const { return red; }
        void setRed(int red) { this->red = red; }
        int getGreen() const { return green; }
        void setGreen(int green) { this->green = green; }
        int getBlue() const { return blue; }
        void setBlue(int blue) { this->blue = blue; }
        void print() const {
            cout << setw(W11) << "Red: " << red << endl; 
            cout << setw(W11) << "Green: " << green << endl;
            cout << setw(W11) << "Blue: " << blue << endl << endl;
        }
};

int main()
{
    // Comment #5: Set output formatting for floating-point numbers.
    cout << fixed << setprecision(2);

    // Comment #6: Create Color object for red color and print its RGB values.
    Color red;
    red.setRed(255);
    red.setGreen(0);
    red.setBlue(0);
    red.print();

    // Comment #7: Create Color object for green color and print its RGB values.
    Color green;
    green.setRed(0);
    green.setGreen(255);
    green.setBlue(0);
    green.print();

    // Comment #8: Create Color object for blue color and print its RGB values.
    Color blue;
    blue.setRed(0);
    blue.setGreen(0);
    blue.setBlue(255);
    blue.print();

    // Comment #9: Create Color object for white color and print its RGB values.
    Color white;
    white.setRed(255);
    white.setGreen(255);
    white.setBlue(255);
    white.print();

    // Comment #10: Create Color object for black color and print its RGB values.
    Color black;
    black.setRed(0);
    black.setGreen(0);
    black.setBlue(0);
    black.print();

    // Comment #11: Create Color object for yellow color and print its RGB values.
    Color yellow;
    yellow.setRed(255);
    yellow.setGreen(255);
    yellow.setBlue(0);
    yellow.print();

    return 0;
} */