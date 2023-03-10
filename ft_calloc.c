/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:21:56 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/08 12:26:52 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (ptr)
	{
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num_elements = 10;
    int element_size = sizeof(int);

    // Asigna memoria para un arreglo de 10 enteros
    int *arr = (int*) ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(EXIT_FAILURE);
    }

    // Inicializa los elementos del arreglo
    for (int i = 0; i < num_elements; i++) {
        arr[i] = i + 1;
    }

    // Imprime los elementos del arreglo
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Libera la memoria asignada
    free(arr);

    return 0;
}*/