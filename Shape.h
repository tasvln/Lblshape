/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#ifndef SDDS_SHAPE_H__
#define SDDS_SHAPE_H__

#include <iostream>

namespace sdds {
  class Shape {
  public:
    virtual void draw(std::ostream& ostr) const = 0;
    virtual void getSpecs(std::istream& istr) = 0;
    
    virtual ~Shape() {};
  };

  std::ostream& operator<<(std::ostream&, const Shape&);
  std::istream& operator>>(std::istream&, Shape&);
}

#endif // !SDDS_SHAPE_H__