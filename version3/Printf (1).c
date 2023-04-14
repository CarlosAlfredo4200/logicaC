int parser(const char *format, data_t f_list[], va_list arg_list)
{
    int k, j, newVal, printData;
    printData = 0;
    for (k = 0; format[k] != '\0'; k++)
    {
        if (format[k] == '%')
        {
            for (j = 0; f_list[j].parameter != NULL; j++)
            {
                if (format[k + 1] == f_list[j].parameter[0])
                {
                    newVal = f_list[j].f(arg_list);
                    if (newVal == -1)
                        return (-1);
                    printData += newVal;
                    break;
                }
            }
            if (f_list[j].parameter == NULL && format[k + 1] != ' ')
            {
                if (format[k + 1] != '\0')
                {
                    _putcharf(format[k]);
                    _putcharf(format[k + 1]);
                    printData = printData + 2;
                }
                else
                    return (-1);
            }
            k = k + 1;
        }
        else
        {
            _putcharf(format[k]);
            printData++;
        }
    }
    return (printData);
}