#include "fdf.h"


void fdf_free()
{
  for (int i = 0; i < global_pointer_nb; i++)
    free(global_pointer_base[i]);
  free(global_pointer_base);

}
