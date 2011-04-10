/******************************************************************************\
 *
 * @file        alias.h
 * @brief       
 * @author      iHuHoo.W (ihuhoo.w@gmail.com)
 * @date        2011-04-10 22:05:16
 *
 *     Copyright (C) 2011, iHuHoo.W, all rights reserved.
 * 
\******************************************************************************/



#ifndef __ALIAS_H__
#define __ALIAS_H__


#ifndef BASIC_ALIAS
#define BASIC_ALIAS

typedef char int8_t;
typedef unsigned char uint8_t;

typedef short int16_t;
typedef unsigned short uint16_t;

typedef int int32_t;
typedef unsigned int uint32_t;

#if define(WIN32)
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#endif /* WIN32 */


#endif /* BASIC_ALIAS */

#endif /* __ALIAS_H__ */


