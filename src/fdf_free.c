/*
** *****************************************************************************
** Elie <elie_alliena@blackcompanydev.fr>
** BLACKCOMPANYDEV - 25/05/2022 00:00:00
**
** - LIBFDF  (LibFdF) -
**
** *****************************************************************************
*/

#include "fdf.h"

void fdf_free()
{
  for (int i = 0; i < global_pointer_nb; i++)
    free(global_pointer_base[i]);
  free(global_pointer_base);

}
