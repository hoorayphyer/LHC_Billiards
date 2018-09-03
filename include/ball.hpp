#ifndef _BALL_HPP_
#define _BALL_HPP_

#include "environment.hpp"

struct Ball {
  Real mass = 1.0;
  static constexpr Real radius = 1.0; // NOTE radius is fixed for all balls
  Real i = 0.4; // i = I / MR^2
  Int label = 0;

};

#endif  // ----- #ifndef _BALL_HPP_  -----
