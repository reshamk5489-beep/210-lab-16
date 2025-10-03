#include <iostream>
#include <iomanip>
using namespace std;

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

    // Comment #4: Public methods including constructors, getters, and print function.
    public:
        // Default constructor
        Color () { red = 0; green = 0; blue = 0; }

        // Partial constructor (just red)
        Color (int r) { red = r; green = 0; blue = 0; }

        // Full parameter constructor (red, green, blue)
        Color (int r, int g, int b) { red = r; green = g; blue = b; }
        
        // Getters 
        int getRed() const { return red; }
        int getGreen() const { return green; }
        int getBlue() const { return blue; }

        // Print method
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

    // Comment #6: Create Color object using deafault constructor.
    Color color1;
    color1.print();

    // Comment #7: Create Color object using partial constructor.
    Color color2(128); // only red
    color2.print();

    // Comment #8: Create Color objects using full constructor for RGB colors.
    Color red(255, 0, 0);
    red.print();

    Color green(0, 255, 0);
    green.print();

    Color blue(0, 0, 255);
    blue.print();

    // Comment #9: Create Color object for white color using full constructor.
    Color white(255, 255, 255);
    white.print();

    // Comment #10: Create Color object for black color using full constructor.
    Color black(0, 0, 0);
    black.print();

    // Comment #11: Create Color object for yellow color using full constructor.
    Color yellow(255, 255, 0);
    yellow.print();

    return 0;
}