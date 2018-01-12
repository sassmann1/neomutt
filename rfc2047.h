/**
 * @file
 * RFC2047 MIME extensions routines
 *
 * @authors
 * Copyright (C) 1996-2000 Michael R. Elkins <me@mutt.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MUTT_RFC2047_H
#define _MUTT_RFC2047_H

#include <stddef.h>

struct Address;

#define mutt_rfc2047_encode_32(a, b) mutt_rfc2047_encode(a, NULL, 32, b);

char *mutt_rfc2047_choose_charset(const char *fromcode, const char *charsets,
                                  char *u, size_t ulen, char **d, size_t *dlen);

void mutt_rfc2047_encode(char **pd, const char *specials, int col, const char *charsets);
void mutt_rfc2047_decode(char **pd);

void rfc2047_encode_addrlist(struct Address *addr, const char *tag);
void rfc2047_decode_addrlist(struct Address *a);

#endif /* _MUTT_RFC2047_H */

