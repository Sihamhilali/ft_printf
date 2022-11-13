#include"ft_printf.h"

void _printf_f(char formt, va_list arg)
{
    if (formt == 'd' || formt == 'i')
        return(0);
    if (formt == 's')
        return(1);
    if (formt == 'x' || formt == 'X')
        return(2);
    if(formt == 'c')
        return(3);
    if(formt == 'p')
        return(4);
    else
    return(ft_putchar(formt));

}
int ft_printf(const char *formt, ...)
{
    va_list arg;
    int     i;

    i = 0;
    va_start(arg, formt);

    while (formt[i] != '\0')
    {
        if(formt[i] == '%')
        {
            i++;
            _printf_f(formt[i],arg);

        }
        ft_putchar(formt[i]);
        i++;
    }
    va_end(arg);
}