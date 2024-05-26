// 7 - Convert a given decimal number to binary: decToBin(int x)
int decToBin(int x)
{
    int binary = 0;
    int iii = 1;
    while (x != 0)
    {
        binary += (x % 2) * iii;
        x /= 2;
        iii *= 10;
    }
    return binary;
}
