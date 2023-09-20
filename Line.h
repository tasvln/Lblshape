/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#ifndef SDDS_LINE_H__
#define SDDS_LINE_H__

#include "LblShape.h"

namespace sdds {
  class Line : public LblShape {
    int m_length;
  public:
    Line();
    Line(const char* label, int length);
    void getSpecs(std::istream& istr);
    void draw(std::ostream& ostr)const;
  };
}

#endif // !SDDS_LINE_H__