/********************************************************************** 
 Freeciv - Copyright (C) 2005 - The Freeciv Project
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC__STYLE_H
#define FC__STYLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct nation_style
{
  int id;
  struct name_translation name;
};

void styles_alloc(int count);
void styles_free(void);
int style_count(void);
int style_number(const struct nation_style *pstyle);
int style_index(const struct nation_style *pstyle);
struct nation_style *style_by_number(int id);
const char *style_name_translation(const struct nation_style *pstyle);
const char *style_rule_name(const struct nation_style *pstyle);
struct nation_style *style_by_rule_name(const char *name);

#define styles_iterate(_p)                               \
{                                                        \
  int _i_;                                               \
  for (_i_ = 0; _i_ < game.control.num_styles; _i_++) {  \
    struct nation_style *_p = style_by_number(_i_);

#define styles_iterate_end                               \
  }                                                      \
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FC__STYLE_H */
