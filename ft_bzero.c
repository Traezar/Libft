void ft_bzero(void *str, size_t n)
{
  size_t  counter ;
  counter = 0;
  while (counter < n)
    *(str + counter) = '\0';
}
