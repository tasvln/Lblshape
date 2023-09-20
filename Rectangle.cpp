/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#include <iostream>
#include <cstring>
#include "Rectangle.h"

using namespace std;

namespace sdds {
  Rectangle::Rectangle() : LblShape() {
    m_width = 0;
    m_height = 0;
  }

  Rectangle::Rectangle(const char* label, int width, int height) : LblShape(label) {
    if (width >= (int)strlen(label) + 2 && height >= 3) {
      m_width = width;
      m_height = height;
    }
    else {
      m_width = 0;
      m_height = 0;
    }
  }

  void Rectangle::getSpecs(istream& istr) {
    LblShape::getSpecs(istr);
    istr >> m_width;
    istr.ignore(1000, ',');
    istr >> m_height;
    istr.ignore(1000, '\n');
  }

  void Rectangle::draw(ostream& ostr) const {
    if (m_width > 0 && m_height > 0 && label() != nullptr) {
      // First Line
      ostr << "+";
			ostr.fill('-');
			ostr.width(m_width - 2);
			ostr << "-";
			ostr << "+" << endl;

      // Second Line
			ostr << "|";
      ostr.width(m_width - 2);
			ostr.fill(' ');
			ostr.setf(ios::left);
      ostr << label();
      ostr.unsetf(ios::left);
      ostr << "|" << endl;

      // Third Line
      for (int i = 0; i < m_height - 3; i++) {
        ostr << "|";
        ostr.width(m_width - 2);
        ostr << " ";
        ostr << "|" << endl;
      }

      // Last Line
			ostr << "+";
			ostr.fill('-');
			ostr.width(m_width - 2);
			ostr << "-";
			ostr << "+";
    }
  }
}