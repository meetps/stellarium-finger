/* This file is part of the KDE project
   Copyright (C) 2003-2004 Jaroslaw Staniek <js@iidea.pl>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#include <windows.h>

#include "kdewin32/stdlib.h"
#include "kdewin32/pwd.h"
#include "kdewin32/stdio.h"
#include "kdewin32/errno.h"

/* these functions always fail for win32 */

struct passwd * getpwnam (const char *name)
{
	return 0;
}


struct passwd * getpwuid (uid_t uid)
{
	return 0;
}


void setpwent (void)
{
}


struct passwd *getpwent()
{
	return 0;
}


void endpwent()
{
}

