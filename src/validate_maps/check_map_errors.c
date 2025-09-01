#include "../../include/so_long.h"

void is_rectangular(t_game_data *data)
{
    int i;
    size_t len;
    len = ft_strlen(data -> map[0]);
    data -> map_w = len;
    i = 1;
    while(i < data -> map_h)
    {
        if((data -> map_w < 4) || (ft_strlen(data -> map[i]) != len))
          {
            ft_printf("Error: Map is not rectangular!\n");
            exit(1);
          }
          //Criar funcao para limpar o map
        i++;
    }

}

void check_walls(t_game_data *data)
{
    int	i;
	int	j;

	// primeira e última linha
	j = 0;
	while (j < data->map_w)
	{
		if (data -> map[0][j] != '1' || data->map[data -> map_h - 1][j] != '1')
			{
                ft_printf("Error: Map is not surrounded by walls!\n");
                exit(1);
            }
            //Criar funcao para limpar o map
		j++;
	}
	// primeira e última coluna
	i = 0;
	while (i < data -> map_h)
	{
		if (data -> map[i][0] != '1' || data -> map[i][data -> map_w - 1] != '1')
			{
                ft_printf("Error: Map is not surrounded by walls!\n");
                exit(1);
            }
            //Criar funcao para limpar o map
		i++;
	}
}

void check_items(t_game_data *data)
{
    int i;
    int j;
    data -> floors = 0;
    data -> walls = 0;
    data -> player = 0;
    data -> collect = 0;
    data -> exit = 0;
    i = 0;

    while(i < data -> map_h)
    {
        j = 0;
        while(j < data -> map_w)
        {
            if (data->map[i][j] == 'P')
			{
                data -> player++;
                data  -> player_x = j;
                data  -> player_y = i;
            }
			else if (data -> map[i][j] == 'E')
			{
                data -> exit++;
                data  -> exit_x = j;
                data  -> exit_y = i;
            }
			else if (data -> map[i][j] == 'C')
				data -> collect++;
            else if (data -> map[i][j] == '0')
				data -> floors++;
            else if (data -> map[i][j] == '1')
				data -> walls++;
            else
            {
                ft_printf("Map error: There are different characters!\n");
                //Limpar map
                exit(1);
            }
                j++;
        }
        i++;
    }
    if((data -> player != 1) || (data -> exit != 1) || (data -> collect == 0))
    {
        ft_printf("Map error: map must contain 1 exit, 1 spirit and at least 1 collectible!\n");
        //Limpar map
        exit(1);
    }
}

void check_map_errors(t_game_data *data)
{
    is_rectangular(data);
    check_walls(data);
    check_items(data);
    check_valid_paths(data);
}