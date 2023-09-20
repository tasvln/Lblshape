/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#ifndef SDDS_LBSHAPE_H__
#define SDDS_LBSHAPE_H__

#include "Shape.h"

namespace sdds {
  class LblShape : public Shape {
    char* m_label;
  protected:
    const char* label()const;
  public:
    // constructors
    LblShape();
    LblShape(const char* label);
    ~LblShape();

    // copy and copy assignment prevention
    LblShape(const LblShape&) = delete;
    LblShape& operator=(const LblShape&) = delete;

    void getSpecs(std::istream& istr);
  };
}

#endif // !SDDS_LBSHAPE_H__