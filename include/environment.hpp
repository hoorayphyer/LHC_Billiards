#ifndef _ENVIRONMENT_HPP_
#define _ENVIRONMENT_HPP_

#include <array>

using Real = double;
using Int = int;

template < typename T >
class Vector {
private:
  std::array<T,3> _data;

public:
  using self_type = Vector<T>;
  using data_type = T;

  Vector( const Vector<T>& other );
  Vector( Vector<T>&& other );
  Vector( T x, T y, T z );
  Vector() : Vector(static_cast<T>(0.0), static_cast<T>(0.0), static_cast<T>(0.0)) {}

  T operator[] ( Int index );

  Vector<T>& operator+= ( Vector<T> b );
  Vector<T>& operator*= ( T b );
  Vector<T>& operator-= ( Vector<T> b );
  Vector<T>& operator/= ( T b );

  Vector<T> operator+ ( Vector<T> b );
  Vector<T> operator* ( T b );
  Vector<T> operator- ( Vector<T> b );
  Vector<T> operator/ ( T b );

  T o( Vector<T> other );
  Vector<T> x( Vector<T> other);

};

template < typename T >
Vector<T> operator* ( T a, Vector<T> b );
template < typename Stream, typename T >
Stream& operator<< ( Stream& s, const Vector<T>& v );



#endif  // ----- #ifndef _ENVIRONMENT_HPP_  -----
