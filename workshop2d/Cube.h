#ifndef CUBE_H
#define CUBE_H
#include "Rectangle.h" 
	
#include<string> 

using namespace std; 

class Cube : public Rectangle  {


private : 

int tcote; 

public : 

	Cube(int dim1,int dim2,int tcote); 

	int getCote() const ; 
	virtual int getPerimetre ()const override ; 
	virtual float getAire()const override ; 
 	virtual string afficheInfo() const override; 
	
	







};

#endif
