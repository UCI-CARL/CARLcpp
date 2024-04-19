#ifndef __CARL_BOOST_EXT__
#define __CARL_BOOST_EXT__


// Boost
#include <boost/array.hpp>
#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>
#include <boost/container/detail/pair.hpp>
#include <boost/tuple/tuple.hpp>

namespace carlboost {

#if BOOST_VERSION >= 106700		
	typedef boost::container::dtl::pair<boost::container::string, boost::container::string> security_t;	
#else
	typedef boost::container::container_detail::pair<boost::container::string, boost::container::string> security_t;  		
#endif	

};


#endif // __CARL_BOOST_EXT__