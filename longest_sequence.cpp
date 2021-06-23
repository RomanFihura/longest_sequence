#include "longest_sequence.h"
uint32_t longest_sequence(std::vector<uint32_t> &v)
{
    uint32_t count = 1;
    std::vector<uint32_t> vcount(v.size());
    for (uint32_t i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
        {
            vcount[i] = count;
            count = 1;
        }
        else
        {
            vcount[i] = count;
            count++;
        }
    }
    uint32_t max = vcount[0];
    for (uint32_t i = 1; i < vcount.size(); i++)
    {
        if (vcount[i] > max)
            max = vcount[i];
    }
    return max;
}