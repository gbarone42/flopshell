/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barone <barone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:51:03 by gbarone           #+#    #+#             */
/*   Updated: 2023/03/15 23:03:19 by barone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_death(t_game *game)
{
	int	i;

	i = 0;
	game->dead = 0;
	while (i < game->g_n)
	{
		if (game->pp->x == game->ghosts[i]->x)
			if (game->pp->y == game->ghosts[i]->y)
				game->dead = 1;
		i++;
	}
	if (game->dead)
		ft_close(game);
}

void	ft_close(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->f = 1;
	if (!game->dead)
		mlx_put_image_to_window(game->mlx, game->win, game->images->f, 0, 0);
	else
		mlx_put_image_to_window(game->mlx, game->win, game->images->l, 0, 0);
}

