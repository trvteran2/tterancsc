#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

const float PI = 3.14159; // defining pi for the formulas
void calculateSurfaceArea(float height, float radius); // function prototype
void calculateVolume(float height, float radius); // function prototype

int main(){// main function where the program is actually executed
float height = 10;
float radius = 5;
std :: cout << "Height: " << height << std :: endl;
std :: cout << "Radius: " << radius << std :: endl;
calculateSurfaceArea(height, radius); //calling the function to calculate surface area of the cylinder
calculateVolume(height, radius); //calling the function to calculate volume of the cylinder
return 0;
}
void calculateSurfaceArea(float height, float radius) { // function definition to calculate surface area of the cylinder
float surfacearea = 2 * PI * radius * (radius + height); //formula
std :: cout << "Surface Area: " << surfacearea << std :: endl;
}
void calculateVolume(float height, float radius) {// function definition to calculate volume of the cylinder
float volume = PI * radius * radius * height; //formula
std :: cout << "Volume: " << volume << std :: endl; 
}