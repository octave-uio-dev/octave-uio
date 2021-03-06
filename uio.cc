// Copyright (C) 2017 Andreas Weber <andy@josoansi.de>
//
// GNU Octave wrapper for UIO (Userspace I/O)
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see
// <http://www.gnu.org/licenses/>.

#include <octave/oct.h>
//#include <octave/oct-map.h>
//#include <octave/Cell.h>

DEFUN_DLD (uio, args,, "uio ()")
{
  if (args.length () != 0)
    print_usage ();
    
  return ovl ("hello world");
}
