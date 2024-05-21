// Given a vector of numbers, return the largest number: max(int[] v)
int max(int *v, int size)
{

    int max = *v;

    for (int i = 1; i < size; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    return max;
}
