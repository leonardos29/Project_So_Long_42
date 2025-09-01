#include "../../include/so_long.h"

void check_map_name(char *map_name)
{
    int len;
    if(!map_name)
    {
        ft_printf("Error: invalid file name\n");
        exit(1);
    }
    len = ft_strlen(map_name);
    if(len < 4 || ft_strncmp(map_name + len - 4, ".ber", 4) != 0)
    {
        ft_printf("Error: file must have .ber extension\n");
        exit(1);
    }
}