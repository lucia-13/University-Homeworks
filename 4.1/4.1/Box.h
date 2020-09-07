#include <string> // defines standard C++ string class
/*
 CH08-320142
 a4 p1.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */

class Box
{
private:  // data members are private

    int height;
    int width;
    int depth;
    
    
public:
    //setters
    void setHeight(int newheight);
    void setWidth(int newwidth);
    void setDepth(int newdepth);

    
    // getter method
 
    int getHeight();
    int getWidth();
    int getDepth();
    //constriuctors and destructors
    Box(int h, int w, int d);
    Box();
    
    ~Box();
    // service method
    void print();
    int Area();
};

