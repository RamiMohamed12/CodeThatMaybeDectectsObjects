#include<iostream> 
#include "Object2D.h" 
#include<string> 
#include "Cercle.h"
#define PI 3.14

using namespace std; 

Cercle ::Cercle(int dim1) : Object2D(dim1,0)  {} 

int Cercle ::getLongueur() const {

return dim1; 

}

int Cercle :: getPerimetre() const {

return 2 * PI * dim1; 


}

float Cercle :: getAire() const {

return PI * dim1 * dim1; 

}

string Cercle :: afficheInfo() const {


return "Cercle: Raduis = " + to_string(dim1)  ;


} 
