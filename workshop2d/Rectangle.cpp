#include <iostream> 
#include "Rectangle.h"
#include "Object2D.h"
#include <string> 

using namespace std; 

Rectangle::Rectangle(int dim1, int dim2) : Object2D(dim1, dim2) {}

int Rectangle::getLongueur() const {
    return dim1; 
}

int Rectangle::getLargeur() const {
    return dim2; 
}

int Rectangle::getPerimetre() const {
    return 2 * (dim1 + dim2); 
}

float Rectangle::getAire() const {
    return dim1 * dim2; 
}

string Rectangle::afficheInfo() const {
    return "Rectangle: Longueur = " + to_string(dim1) + ", Largeur = " + to_string(dim2);
}

