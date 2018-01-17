unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n1 = a, n2 = b, minM;

    if (n1 == 0 || n2 == 0)
        return (0);
    minM = (n1 > n2) ? n1 : n2;
    while(1)
    {
        if( min % n1 == 0 && min %n2 == 0 )
        {
            break;
        }
        ++min;
    }
    return (min);
}
