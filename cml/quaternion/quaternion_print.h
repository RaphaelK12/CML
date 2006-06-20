/* -*- C++ -*- ------------------------------------------------------------
 @@COPYRIGHT@@
 *-----------------------------------------------------------------------*/
/** @file
 *  @brief
 */

#ifndef quaternion_print_h
#define quaternion_print_h

#include <iostream>

namespace cml {
namespace detail {

/** Print a quaternion given scalar first. */
template<typename E, class AT, class CT> inline std::ostream&
print(std::ostream& os, const cml::quaternion<E,AT,scalar_first,CT>& q)
{
    os << ((q[0] < 0)?" - ":"") << std::fabs(q[0]);
    os << ((q[1] < 0)?" - ":" + ") << std::fabs(q[1]) << "i";
    os << ((q[2] < 0)?" - ":" + ") << std::fabs(q[2]) << "j";
    os << ((q[3] < 0)?" - ":" + ") << std::fabs(q[3]) << "k";
    return os;
}

/** Print a quaternion given vector (imaginary) first. */
template<typename E, class AT, class CT> std::ostream&
quat_print(std::ostream& os, const cml::quaternion<E,AT,vector_first,CT>& q)
{
    os << ((q[0] < 0)?" - ":"") << std::fabs(q[0]) << "i";
    os << ((q[1] < 0)?" - ":" + ") << std::fabs(q[1]) << "j";
    os << ((q[2] < 0)?" - ":" + ") << std::fabs(q[2]) << "k";
    os << ((q[3] < 0)?" - ":" + ") << std::fabs(q[3]);
    return os;
}

} // namespace detail

#if !defined(CML_PLAIN_QUATERNION_OUTPUT)

template<typename E, class AT, class CT> std::ostream&
operator<<(std::ostream& os, const cml::quaternion<E,AT,scalar_first,CT>& q)
{
    os << ((q[0] < 0)?" - ":"") << std::fabs(q[0]);
    os << ((q[1] < 0)?" - ":" + ") << std::fabs(q[1]) << "i";
    os << ((q[2] < 0)?" - ":" + ") << std::fabs(q[2]) << "j";
    os << ((q[3] < 0)?" - ":" + ") << std::fabs(q[3]) << "k";
    return os;
}

template<typename E, class AT, class CT> std::ostream&
operator<<(std::ostream& os, const cml::quaternion<E,AT,vector_first,CT>& q)
{
    os << ((q[0] < 0)?" - ":"") << std::fabs(q[0]) << "i";
    os << ((q[1] < 0)?" - ":" + ") << std::fabs(q[1]) << "j";
    os << ((q[2] < 0)?" - ":" + ") << std::fabs(q[2]) << "k";
    os << ((q[3] < 0)?" - ":" + ") << std::fabs(q[3]);
    return os;
}

#else

/** Output a quaternion to a std::ostream. */
template<typename E, class AT, class OT, typename CT> std::ostream&
operator<<(std::ostream& os, const cml::quaternion<E,AT,OT,CT>& q)
{
    os << "[";
    for (size_t i = 0; i < 4; ++i) {
        os << " " << q[i];
    }
    os << " ]";
    return os;
}

#endif

} // namespace cml

#endif

// -------------------------------------------------------------------------
// vim:ft=cpp