unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n1 = a, n2 = b, minMultiple;

    if (n1 == 0 || n2 == 0)
        return (0);
    minMultiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            break;
        }
        ++minMultiple;
    }
    return (minMultiple);
}