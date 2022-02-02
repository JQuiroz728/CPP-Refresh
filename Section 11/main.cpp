#include <iostream>

double calcAreaCircle(double radius);
double calcVolumeCylinder(double radius, double height);
void areaOfCircle();
void volumeOfCylinder();

const double pi = 3.14159;

int main() {

    areaOfCircle();
    volumeOfCylinder();

    return 0;
}


double calcAreaCircle(double radius) {
    return pi * radius * radius;
}

double calcVolumeCylinder(double radius, double height) {
    return calcAreaCircle(radius) * height;
}

void areaOfCircle() {
    double radius = 0.0;
    std::cout << "\nEnter radius of circle: ";
    std::cin >> radius;

    std::cout << "The area of a circle with radius " << radius << " is " << calcAreaCircle(radius) << std::endl;
}

void volumeOfCylinder() {
    double radius = 0.0;
    double height = 0.0;
    std::cout << "\nEnter radius of cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter height of cylinder: ";
    std::cin >> height;

    std::cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calcVolumeCylinder(radius, height) << std::endl;
}