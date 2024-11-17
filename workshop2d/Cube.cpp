#include<iostream> 
#include "Rectangle.h"
#include "Cube.h" 
#include <string> 


using namespace std; 

Cube :: Cube(int dim1,int dim2,int tcote) : Rectangle (dim1,dim2), tcote(tcote) {}

int Cube :: getCote () const {

return tcote; 

}

int Cube ::getPerimetre () const {

return tcote * 4;

}

float Cube ::getAire () const {

return tcote * tcote ; 

}

std::string Cube::afficheInfo() const {
    return "Cube: Longueur = " + to_string(getLongueur()) + 
           ", Largeur = " + to_string(getLargeur()) + 
           ", Cote = " + to_string(tcote);
}

