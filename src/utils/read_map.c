#include "../../include/so_long.h"

void read_map(char *name, t_game_data *data)
{
    int fd;
    int i;
    char *line;

    fd = open(name,O_RDONLY);
    if(fd < 0)
        {
            ft_printf("Error:Cannot open the file!\n");
            exit(1);
        }
    data -> map_h = 0;
    while((line = get_next_line(fd)))
    {
        if(line[0] == '\n')
            ft_printf("Map error: remove new line!\n");
        // Precisa dar free na line (criar funcao para isso)
        data -> map_h++;
        free(line);
    } 
    close(fd);
    data -> map = malloc(sizeof(char*) * (data -> map_h + 1));
    if(!data -> map)
        {
            ft_printf("Error: error to allocate using malloc!\n");
            exit(1);
        }
    fd = open(name,O_RDONLY);
    if(fd < 0)
        {
            ft_printf("Error:Cannot reopen the file!\n");
            exit(1);
        }
    i = 0;
    while ((line = get_next_line(fd)))
	{
		data-> map[i] = ft_strtrim(line, "\n");
		free(line);
		i++;
	}
    data -> map[i] = NULL;
    close(fd);
    ft_printf("Matriz do mapa criado\n");
    ft_printf("Altura do mapa: %d\n", data -> map_h);
}