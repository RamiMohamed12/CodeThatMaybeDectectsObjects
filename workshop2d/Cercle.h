#ifndef CERCLE_H 
#define CERCLE_H 

#include"Object2D.h" 

#include<string> 

using namespace std; 

class Cercle : public Object2D {


public : 

	Cercle(int dim1); 
        int getLongueur () const; 	
        
        virtual int getPerimetre() const override  ; 
	virtual float getAire() const override ; 
	virtual string afficheInfo() const override;

};

#endif 
