/* 

* Copyright (c) 2021  Shvedov Kirill

* Github: @shvedoff98

* This header file provides basic useful
* functions to work with any basic algorithms, 
* functions provided operations by the standard
* regarding any standard and non-standard algorithm

*  You can simply include this header file into 
* your project and enjoy using this.

*  All functions implemented by me provide over- 
* loads such as delimiters set as space by default
* in many cases e.t.c. 

*/

#ifndef _IOS_STR_H
#define _IOS_STR_H

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

namespace utility {


///////////////////////////////////////////////////////////////////
//								 //
//	 utility::get_lines () --> provides  easy string	 // 
//	 dividing word by word using				 //
//	 certain delimeter as space specified by default.	 //
//								 //
///////////////////////////////////////////////////////////////////


template <class Out>
void  get_lines (std::string const& str, char delim, Out res)
{
    std::istringstream ist {str};
    std::string temp_str;

    while (std::getline (ist, temp_str, delim))
    {
	*res ++ = temp_str;
    }
}


///////////////////////////////////////////////////////////////////
//								 //
//	 utility::print () --> provides easy printing	         // 
//	 of all elements in any container             		 //
//	 which supports iterator.                        	 //
//								 //
///////////////////////////////////////////////////////////////////


template <class C>
void print (C arr, char delim = ' ')
{
    for ( auto it = arr.begin(); it != arr.end(); ++it)
    {
	std::cout << *it << delim;
    }
    std::cout << "\n";
}



///////////////////////////////////////////////////////////////////
//								 //
//	 utility::make_nt () --> provides generating             // 
//       Size time function Fun into output stream.		 //
//	                                                 	 //
//								 //
///////////////////////////////////////////////////////////////////


template <class IT, class Size, class Fun>
void make_nt ( IT stream, Size n,  Fun f)
{
    while (n--)
    {
	*stream = f();
	++ stream;
    }
}

}

#endif
