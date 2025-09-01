#include "../../include/so_long.h"

void load_img(t_game_data *data)
{
    data->wall_img = mlx_xpm_file_to_image(data->mlx, "assets/wall.xpm",&data -> tile_w, &data -> tile_h);
    data->floor_img = mlx_xpm_file_to_image(data->mlx, "assets/floor.xpm",&data -> tile_w, &data -> tile_h);
    data->player_img = mlx_xpm_file_to_image(data->mlx, "assets/player.xpm",&data -> tile_w, &data -> tile_h);
    data->collect_img = mlx_xpm_file_to_image(data->mlx, "assets/collect.xpm",&data -> tile_w, &data -> tile_h);
    data->exit_img = mlx_xpm_file_to_image(data->mlx, "assets/exit_close.xpm",&data -> tile_w, &data -> tile_h);    
    if (!data->wall_img || !data->floor_img || !data->player_img
    || !data->collect_img || !data->exit_img)
{
    ft_printf("Error: failed to load images\n");
    //Destroir imgs e limpar  tudo
    exit(1);
}

}

void render_map(t_game_data *data)
{
    int x, y;
    void *img;

    y = 0;
    while (y < data->map_h)
    {
        x = 0;
        while (x < data->map_w)
        {
            if (data->map[y][x] == '0')
                img = data->floor_img;
            else if (data->map[y][x] == '1')
                img = data->wall_img;
            else if (data->map[y][x] == 'P')
                img = data->player_img;
            else if (data->map[y][x] == 'C')
                img = data->collect_img;
            else if (data->map[y][x] == 'E')
                img = data->exit_img;
            mlx_put_image_to_window(data->mlx, data->win, img, x * data->tile_w, y * data->tile_h);
            x++;
        }
        y++;
    }
}


void create_win(t_game_data *data)
{
    data -> win_h = data -> map_h * data -> tile_h;
    data -> win_w = data -> map_w * data -> tile_w;
    data -> win = mlx_new_window(data -> mlx, data -> win_w, data -> win_h, "SO LONG");
    if (!data -> win)
	{
        //Limpar mapa
		exit(1);
	}
}

void game_init(t_game_data *data)
{
    data -> mlx = mlx_init();
    if (!data -> mlx)
	{
        //Limpar mapa
		exit(1);
	}
    data -> moves = 0;
    load_img(data);
    create_win(data);
    render_map(data);
    mlx_key_hook(data -> win, handle_key, data);
    mlx_loop(data -> mlx);
}