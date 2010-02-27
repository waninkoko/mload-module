#ifndef _IOS_TYPES_H_
#define _IOS_TYPES_H_

#include <stdint.h>

/* Data types */
typedef char			s8;
typedef short			s16;
typedef int			s32;
typedef unsigned char		u8;
typedef unsigned short		u16;
typedef unsigned int		u32;
typedef unsigned long long	u64;
typedef volatile unsigned char	vu8;
typedef volatile unsigned short	vu16;
typedef volatile unsigned int	vu32;

/* Boolean values */
#define true			1
#define false			0

/* Attributes */
#ifndef ATTRIBUTE_ALIGN
# define ATTRIBUTE_ALIGN(v)	__attribute__((aligned(v)))
#endif
#ifndef ATTRIBUTE_PACKED
# define ATTRIBUTE_PACKED	__attribute__((packed))
#endif

#endif
