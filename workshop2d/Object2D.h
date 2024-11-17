#ifndef OBJECT2D_H
#define OBJECT2D_H


#include<string> 

using namespace std; 

class Object2D {

protected : 

	int dim1; 
	int dim2; 

public : 
	
	Object2D(int dim1,int dim2);
	virtual int getPerimetre() const =0 ; 
	virtual float getAire() const =0 ; 
	virtual string afficheInfo() const = 0; 
	virtual ~Object2D();
};

#endif 
