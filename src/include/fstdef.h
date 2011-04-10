/******************************************************************************\
 *
 * @file        fstdef.h
 * @brief       
 * @author      iHuHoo.W (ihuhoo.w@gmail.com)
 * @date        2011-04-10 19:06:56
 *
 *     Copyright (C) 2011, iHuHoo.W, all rights reserved.
 * 
\******************************************************************************/



#ifndef __FSTDEF_H__
#define __FSTDEF_H__


/** 
 * Yes, we useed unsafe function.
 * see http://connect.microsoft.com/VisualStudio/feedback/details/101187/warning-c4996-should-be-moved-to-a-new-level-5-warning#details
 */

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_DEPRECATE
#endif

#ifdef _WIN32
#define _WIN32_WINNT 0x0400
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#endif  /* WIN32 */


#include <cassert>


#ifndef ASSERT
#define ASSERT assert
#endif /* ASSERT */


/**
 * For interface method, and disable WARNINGS
 */
#define UNUSED_ARG(x) do {/* null */} while (&x == 0)


/**
 * declare the object should not copyable
 *
 * usage:
 *      class AClass
 *      {
 *          DECLARE_NONCOPYABLE(AClass);
 *      ...
 *      };
 */
#ifndef __DECLARE_NONCOPYABLE__
#define DECLARE_NONCOPYABLE(CLASS) private: \
    CLASS(const CLASS&); \
    const CLASS& operator = (const CLASS&)
#endif /* __DECLARE_NONCOPYABLE__ */


#endif /* __FSTDEF_H__ */


