# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 10:52:25 by kuzyilma          #+#    #+#              #
#    Updated: 2024/02/14 10:52:27 by kuzyilma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c ft_putchar.c
gcc -Wall -Werror -Wextra -c ft_swap.c
gcc -Wall -Werror -Wextra -c ft_putstr.c 
gcc -Wall -Werror -Wextra -c ft_strlen.c 
gcc -Wall -Werror -Wextra -c ft_strcmp.c
ar rcs libft.a  *.o
find . -name "*.o" -type f -delete
