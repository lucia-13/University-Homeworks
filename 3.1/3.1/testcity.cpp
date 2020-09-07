#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    City O0;
    City O1;
    City O2;
    
    string city0 = "Bremen", city1 ="Hamburg", city2 = "Berlin";
    int citizens0= 500000, citizens1= 1500000, citizens2= 5000000;
    string location = "Germany";
    string POI2= "Brandenburg Tor", POI1= "St. Pauli", POI0 = "JUB";
    O0.setName(city0);
    O0.setCitizens(citizens0);
    O0.setLocation(location);
    O0.setPOI(POI0);
    O1.setName(city1);
    O1.setCitizens(citizens1);
    O1.setLocation(location);
    O1.setPOI(POI1);
    O2.setName(city2);
    O2.setCitizens(citizens2);
    O2.setLocation(location);
    O2.setPOI(POI2);
    
    O0.print();
    O1.print();
    O2.print();
    return 0;
}
