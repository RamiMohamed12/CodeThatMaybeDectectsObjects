#ifndef TRIANGLE_H
#define TRIANGLE_H 

#include "Object2D.h" 

#include<string> 


using namespace std; 

class Triangle : public Object2D{

private : 

	int dim3; 

public : 

Triangle( int dim1, int dim2, int dim3); 

int getLongueur () const;
int getLargeur () const  ; 
int getSide () const ; 

virtual int getPerimetre() const override  ;
virtual float getAire() const override ;
virtual string afficheInfo() const override;


};

#endif
