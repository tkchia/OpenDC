/*
 *  Released under the GNU LGPL.  See http://www.gnu.org/licenses/lgpl.txt
 *
 *  This program is part of the DeSmet C Compiler
 *
 *  This library is free software * you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published
 *  by the Free Software Foundatation * either version 2.1 of the License, or
 *  any later version.
 *
 *  This library is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY * without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 *  License for more details.
 */
/*	STRREV  --	reverse a string.	*/

char *strrev(str)
	char *str; {
	int first,last;
	char ch;

	first=0;
	last=strlen(str)-1;
	while (first < last) {
		ch=str[last];
		str[last--]=str[first];
		str[first++]=ch;
		}
	return str;
	}
