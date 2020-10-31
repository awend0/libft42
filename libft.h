/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:34:40 by mraymun           #+#    #+#             */
/*   Updated: 2020/10/31 18:42:34 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_strlcat(char *dst, char *src, int dstsize);
int		ft_strcmp(char *s1, char *s2);
int		ft_memcmp(const void *s1, const void *s2, int n);
int		ft_strlcpy(char *dst, char *src, int dstsize);
int		ft_strnlen(char *str, int maxlen);
int		ft_isspace(char c);
char 	*ft_strnstr(const char *haystack, const char *needle, int len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, int n);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, int n);
char	*ft_strdup(char *s);
char	*ft_itoa(int n);
char	*ft_strnew(int size);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
void	*ft_memcpy(void *dst, const void *src, int n);
void	*ft_memccpy(void *dst, const void *src, int c, int n);
void	*ft_memset(void *b, int c, int len);
void	*ft_memalloc(int size);
void	*ft_calloc(int count, int size);
void	*ft_memmove(void *dst, const void *src, int len);
void	*ft_memchr(const void *s, int c, int n);
void	ft_bzero(void *s, int n);
void	ft_strclr(char *s);
#endif
