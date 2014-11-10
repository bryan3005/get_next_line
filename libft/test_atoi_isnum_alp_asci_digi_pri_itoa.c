/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi_isnum_alp_asci_digi_pri_itoa.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:09:29 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 11:19:33 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi_itoa_is.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliau <ncolliau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:32:26 by ncolliau          #+#    #+#             */
/*   Updated: 2014/11/10 10:01:53 by ncolliau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <ctype.h>

void	test_atoi(void)
{
	printf("Atoi\n");
	printf("\"542.1\"   -->   %d   |   ft : %d\n", atoi("542.1"), ft_atoi("542.1"));
	printf("\"-0\"   -->   %d   |   ft : %d\n", atoi("-0"), ft_atoi("-0"));
	printf("\"-800\"   -->   %d   |   ft : %d\n", atoi("-800"), ft_atoi("-800"));
	printf("\"test\"   -->   %d   |   ft : %d\n", atoi("test"), ft_atoi("test"));
	printf("\"t12\"   -->   %d   |   ft : %d\n", atoi("t12"), ft_atoi("t12"));
	printf("\nComportements speciaux (non sanctionnes) :\n");
	printf("\"    + 00123\"   -->   %d   |   ft : %d\n", atoi("    + 0012"), ft_atoi("    + 0012"));
	printf("\"  -12\"   -->   %d   |   ft : %d\n", atoi("  -12"), ft_atoi("  -12"));
	printf("\" --12\"   -->   %d   |   ft : %d\n", atoi(" --12"), ft_atoi(" --12"));
	printf("\"\\n12\"   -->   %d   |   ft : %d\n", atoi("\n12"), ft_atoi("\n12"));
}

void	test_isalnum(void)
{
	int		i;
	int		ret;

	i = -1;
	ret = 0;
	while (i++ < 150)
		ret += ft_isalnum(i) - isalnum(i);
	if (ret != 0)
		printf("Erreur ft_isalnum\n");
	else
		printf("OK ft_isalnum\n");
}

void	test_isalpha(void)
{
	int		i;
	int		ret;

	i = -1;
	ret = 0;
	while (i++ < 150)
		ret += ft_isalpha(i) - isalpha(i);
	if (ret != 0)
		printf("Erreur ft_isalpha\n");
	else
		printf("OK ft_isalpha\n");
}

void	test_isascii(void)
{
	int		i;
	int		ret;

	i = -1;
	ret = 0;
	while (i++ < 150)
		ret += ft_isascii(i) - isascii(i);
	if (ret != 0)
		printf("Erreur ft_isascii\n");
	else
		printf("OK ft_isascii\n");
}

void	test_isdigit(void)
{
	int		i;
	int		ret;

	i = -1;
	ret = 0;
	while (i++ < 150)
		ret += ft_isdigit(i) - isdigit(i);
	if (ret != 0)
		printf("Erreur ft_isdigit\n");
	else
		printf("OK ft_isdigit\n");
}

void	test_isprint(void)
{
	int		i;
	int		ret;

	i = -1;
	ret = 0;
	while (i++ < 150)
		ret += ft_isprint(i) - isprint(i);
	if (ret != 0)
		printf("Erreur ft_isprint\n");
	else
		printf("OK ft_isprint\n");
}

void	test_itoa(void)
{
	printf("Itoa\n");
	printf("542   -->   \"%s\"\n", ft_itoa(542));
	printf("-0   -->   \"%s\"\n", ft_itoa(-0));
	printf("-800   -->   \"%s\"\n", ft_itoa(-800));
}

int		main(void)
{
	test_atoi();
	getchar();
	test_isalnum();
	getchar();
	test_isalpha();
	getchar();
	test_isascii();
	getchar();
	test_isdigit();
	getchar();
	test_isprint();
	getchar();
	test_itoa();
	return (0);
}