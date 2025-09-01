#include "../include/so_long.h"

int main(int argc, char **argv)
{
    char *map_name;
    t_game_data game_data;
    map_name = argv[1];
    if(argc != 2)
        ft_printf("error");
    check_map_name(map_name);
    read_map(map_name,&game_data);
    check_map_errors(&game_data);
    game_init(&game_data);
}
