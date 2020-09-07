#include <string> // defines standard C++ string class

/* First C++ class */
class City
{
private:  // data members are private
    std::string name;
     int citizens;
     std::string location;
     std::string POI;
 
    
public: // business logic methods are public
    // setter methods
    void setName(const std::string& newname);
    void setCitizens(int newcitizens);
    void setLocation(std::string& newlocation);
    void setPOI(std::string& newPOI);
   
    // getter method
    std::string getName();
    int getCitizens();
    std::string getLocation();
    std::string getPOI();
   
   
    // service method
    void print();
};
