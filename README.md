
# LibFdf

Tired of forgetting to free all your mallocs in C?  
Try fdf_malloc with the single call to fdf_free at the end of your program!  
No need to free each allocation made with fdf_malloc fdf_free takes care of it for you!


## Installation

Install LibFdf with make !

```bash
  make install 
  make uninstall
```
    
## Usage/Examples

```c
void *fdf_malloc(size_t size);      // call to alloc safely !
void fdf_free();                    // call to free all alloc !
```


## Compilation !

```c
gcc "myprogram.c" -lfdf
```


## Support

For support, email elie_alliena@blackcompanydev.fr.


## Authors

- [@Elania-Marvers](https://github.com/Elania-Marvers)

