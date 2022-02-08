#include <iostream>
#include <string>

double calculateAreaCircle(double radius);
double calculateVolumeCylinder(double radius, double height);
void areaOfCircle();
void volumeOfCylinder();
void displayName(std::string name);
float invsqrt(float num);

const double pi = 3.14159;


int main() {

    areaOfCircle();
    volumeOfCylinder();
    displayName("Jorge");

    int n = 256;
    float invSqRoot = invsqrt(n);
    std::cout << "The inverse square root of the number " << n << " is " << invSqRoot;

    return 0;
}


double calculateAreaCircle(double radius) {
    return pi * radius * radius;
}

double calculateVolumeCylinder(double radius, double height) {
    return calculateAreaCircle(radius) * height;
}

void areaOfCircle() {
    double radius = 0.0;
    std::cout << "\nEnter radius of circle: ";
    std::cin >> radius;

    std::cout << "The area of a circle with radius " << radius << " is " << calculateAreaCircle(radius) << std::endl;
}

void volumeOfCylinder() {
    double radius = 0.0;
    double height = 0.0;
    std::cout << "\nEnter radius of cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter height of cylinder: ";
    std::cin >> height;

    std::cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calculateVolumeCylinder(radius, height) << std::endl;
}

void displayName(std::string name) {
    std::cout << "Hello " << name << std::endl;
}

float invsqrt(float num) {
    long i;
    float x, y;
    const float threehalfs = 1.5F;

    x = num * 0.5F;
    y = num;

    i = * (long *) &y;
    i = 0x5f3759df - (i >> 1);
    y = * (float *) &i;
    y = y * (threehalfs - (x * y * y));

    return y;
}