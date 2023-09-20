/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#include <iostream>
#include "Shape.h"

using namespace std;

namespace sdds {
  ostream& operator<<(ostream& ostr, const Shape& shape) {
    shape.draw(ostr);
    return ostr;
  }

  istream& operator>>(istream& istr, Shape& shape) {
    shape.getSpecs(istr);
    return istr;
  }
}