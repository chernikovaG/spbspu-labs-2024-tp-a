#ifndef DELIMITER_HPP
#define DELIMITER_HPP

#include <istream>

namespace ibragimov
{
  struct Delimiter
  {
    char expected;
  };
  std::istream& operator>>(std::istream&, Delimiter&&);
}

#endif
