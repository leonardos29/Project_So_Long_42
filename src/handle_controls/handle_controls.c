#include "../../include/so_long.h"

int verify_tile(t_game_data *data, char tile, int x, int y)
{
     if (tile == '1')
        return(1);
    if (tile == 'C')
    {
        data->collected++;
        data->map[y][x] = '0';
        if(data -> collected == data -> collect)
          data->exit_img = mlx_xpm_file_to_image(data->mlx, "assets/exit_open.xpm",&data -> tile_w, &data -> tile_h);  
    }
    if (tile == 'E')
    {
        if (data->collected == data->collect)
            clear_victory(data);
        else
            return(1);
    }
    return(0);
}

void	move_player(t_game_data *data, int dx, int dy)
{
    int new_x = data->player_x + dx;
    int new_y = data->player_y + dy;
    char next_tile;

    if (new_x < 0 || new_x >= data->map_w || new_y < 0 || new_y >= data->map_h)
        return;
    next_tile = data->map[new_y][new_x];
    if(verify_tile(data, next_tile,new_x,new_y))
        return;
    data->map[data->player_y][data->player_x] = '0';
    data->map[new_y][new_x] = 'P';                  
    data->player_x = new_x;
    data->player_y = new_y;
    data->moves++;
    ft_printf("Movimentos: %d\n", data->moves);
    render_map(data);
}

int handle_key(int keycode, t_game_data *data)
{
    if(keycode == 65307)
    {
        clear_map(data -> map, data -> map_h);
        exit(0);
    }
    else if(keycode == 'w')
        move_player(data,0, -1);
    else if(keycode == 's')
        move_player(data, 0, 1);
    else if (keycode == 'a')
        move_player(data, -1, 0);
    else if (keycode == 'd')
        move_player(data, 1, 0);
    return (0);
}
