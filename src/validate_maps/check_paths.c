#include "../../include/so_long.h"

char **clone_map(char **map, size_t height)
{
    char **cpy;
    size_t i;

    cpy = malloc(sizeof(char *) * (height + 1));
    if(!cpy)
        return (NULL);
    i = 0;
    while (i < height)
    {
        cpy[i] = ft_strdup(map[i]);
        i++;
    }
    cpy[i] = NULL;
    return(cpy);
}

void dfs(char **map, int x, int y, t_game_data *data)
{
    char player_p;

    player_p = map[y][x];
    if(x < 0 || y < 0 || y >= data -> map_h || x >= data -> map_w || player_p  == '1' 
        || player_p  == 'V')
        return;
    if (player_p  == 'C')
        data->r_collects++;
    if (player_p  == 'E')
        data->r_exit = 1;
    map[y][x] = 'V';
    if (data->r_collects == data->collect && data->r_exit)
        return;
    dfs(map, x + 1, y, data);
    dfs(map, x - 1, y, data);
    dfs(map, x, y + 1, data);
    dfs(map, x, y - 1, data);
}

void check_valid_paths(t_game_data *data)
{
    char **map_cpy;

    map_cpy = clone_map(data->map, data->map_h);
    if (!map_cpy)
    {
        ft_printf("Error: malloc failed in path validation\n");
        exit(1);
    }
    data->r_collects = 0;
    data->r_exit = 0;
     dfs(map_cpy, data->player_x, data->player_y, data);
    // Liberar copia do mapa
    if (data->r_collects != data->collect || !data->r_exit)
    {
        ft_printf("Map error: no valid path to all collectibles or exit!\n");
        exit(1);
    }

}