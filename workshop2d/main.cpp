#include <iostream>
#include "Rectangle.h"
#include "Cube.h"
#include "Triangle.h" 
#include "Cercle.h" 
using namespace std;

int main() {
    int l = 1; 
    int dim1; 
    int dim2; 	
    int tcote; 	
    int dim3;  
    int r;  
    char quit; 
    Object2D* shape = nullptr; 

    while (l == 1) { 
        cout << "Enter raduis" << endl; 
        cin >> r; 
		
        if (r > 0) { 	
            cout << "You have a cercle with a raduis of " << r << endl;
            shape = new Cercle(r); 
            cout << "Cercle Info: " << endl;  
            cout << shape->afficheInfo() << endl; 
            cout << "Perimeter: " << shape->getPerimetre() << endl; 
            cout << "Area: " << shape->getAire() << endl; 
       	    cout << endl;
         } else if (r == 0) {
            cout << "Enter Side 1" << endl; 
            cin >> dim1; 
            cout << "Enter Side 2" << endl; 
            cin >> dim2; 
            cout << "Enter Side 3" << endl;
            cin >> dim3;               
            
            if (dim3 == 0) {
                if (dim1 != dim2) {
                    shape = new Rectangle(dim1, dim2);
                    cout << "You have a Rectangle of: " << endl;
                    cout << shape->afficheInfo() << endl;
                    cout << "Perimeter: " << shape->getPerimetre() << endl;
                    cout << "Area: " << shape->getAire() << endl;
                    cout << endl; 
                }
                if (dim1 == dim2) {       		
                    tcote = dim1 = dim2;  
                    shape = new Cube(dim1, dim2, tcote);  
                    cout << "You have a Square of :" << endl;
                    cout << shape->afficheInfo() << endl;
                    cout << "Perimeter: " << shape->getPerimetre() << endl;
                    cout << "Area: " << shape->getAire() << endl;
                    cout << endl;
                }
            } else if (dim3 > 0) {
                shape = new Triangle(dim1, dim2, dim3); 
                cout << "You have a Triangle :" << endl; 
                cout << shape->afficheInfo() << endl; 
                cout << "Perimeter: " << shape->getPerimetre() << endl; 
                cout << "Area: " << shape->getAire() << endl; 
                cout << endl; 
            }
        }
          cout << "\n";
          cout << "Do you want to quit (y/n) "; 
          cout<<endl;
          cin >> quit; 
          if (quit == 'y' || quit =='Y') {
           cout << "Quiting this bad code " << endl; 
                break; 
                 }
    
    }
    
    return 0;
}

