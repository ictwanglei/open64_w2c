/*

  Copyright (C) 2000, 2001, Silicon Graphics, Inc.  All Rights Reserved.

  This program is free software; you can redistribute it and/or modify it
  under the terms of version 2.1 of the GNU Lesser General Public License 
  as published by the Free Software Foundation.

  This program is distributed in the hope that it would be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

  Further, this software is distributed without any warranty that it is
  free of the rightful claim of any third person regarding infringement 
  or the like.  Any license provided herein, whether implied or 
  otherwise, applies only to this software file.  Patent licenses, if
  any, provided herein do not apply to combinations of this program with 
  other software, or any other product whatsoever.  

  You should have received a copy of the GNU Lesser General Public 
  License along with this program; if not, write the Free Software 
  Foundation, Inc., 59 Temple Place - Suite 330, Boston MA 02111-1307, 
  USA.

  Contact information:  Silicon Graphics, Inc., 1600 Amphitheatre Pky,
  Mountain View, CA 94043, or:

  http://www.sgi.com

  For further information regarding this notice, see:

  http://oss.sgi.com/projects/GenInfo/NoticeExplan

*/



#pragma ident "@(#) libf/fort/c4toc16.c	92.1	06/24/99 10:18:36"

#include <fortran.h>

extern void _C4TOC16(_f_comp16 *ret_val, _f_comp4 arg);

/* Convert 64-bit complex to 256-bit complex for the cf90_s compiler
 * only. The argument is a structure and the result is an address of a
 * structure.
 */

void
_C4TOC16(_f_comp16 *ret_val,
	_f_comp4 arg)
{
	ret_val->x[0] = (_f_real16) arg.x[0];
	ret_val->x[1] = (_f_real16) arg.x[1];
	return;
}
