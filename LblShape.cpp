/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#include <iostream>
#include <cstring>
#include <string>
#include "LblShape.h"

using namespace std;

namespace sdds {
  LblShape::LblShape() {
    m_label = nullptr;
  }

  LblShape::LblShape(const char* label) {
    m_label = nullptr;
    if (label) {
      m_label = new char[strlen(label) + 1];
      strcpy(m_label, label);
    }
  }

  LblShape::~LblShape() {
    delete[] m_label;
  }

  void LblShape::getSpecs(istream& istr) {
    char label[256];
    istr.getline(label, 256, ',');
    delete[] m_label;
    m_label = new char[strlen(label) + 1];
    strcpy(m_label, label);
  }

  const char* LblShape::label() const {
    return m_label;
  }
}