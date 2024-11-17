#ifndef RECTANGLE_H
#define RECTANGLE_H 
#include "Object2D.h" 
#include<string> 

using namespace std; 

class Rectangle : public Object2D {


public : 

	Rectangle(int dim1, int dim2 );
	int getLongueur () const ; 	
	int getLargeur() const; 

	virtual int getPerimetre() const override  ; 
	virtual float getAire() const override ; 
	virtual string afficheInfo() const override;

	

};

#endif 
