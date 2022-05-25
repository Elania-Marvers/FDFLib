#include "fdf.h"


int global_pointer_nb = 0;
void **global_pointer_base;


void *fdf_malloc(size_t		size)
{
  if (size != 0)
    {
      if (global_pointer_nb % 10 == 0)
	  global_pointer_base = realloc(global_pointer_base, sizeof(void *) * (global_pointer_nb + 10));
      global_pointer_base[global_pointer_nb++] = malloc (size);
      return global_pointer_base[global_pointer_nb - 1];
    }
  return NULL;
}
