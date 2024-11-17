#include<iostream> 

#include "Object2D.h" 
#include "Triangle.h" 
#include <string> 

using namespace std; 


Triangle :: Triangle(int dim1,int dim2, int dim3) : Object2D(dim1,dim2), dim3(dim3) {} 

int Triangle::getLongueur() const {

return dim1; 

}

int Triangle::getLargeur() const {

return dim2;

} 

int Triangle::getSide() const {

return dim3;

}


int Triangle::getPerimetre () const {


return dim1 + dim2 + dim3; 

}

float Triangle:: getAire () const {


return 0.5 * dim2 * dim3; // base = dim2, height = dim3 


}

string Triangle::afficheInfo() const {

return "Triangle : First Side  = " + to_string(dim1) + ", Second Side = " + to_string(dim2) + ", Third Side = " + to_string(dim3); 


}
