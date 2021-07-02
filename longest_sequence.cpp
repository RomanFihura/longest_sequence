#include "longest_sequence.h"

std::pair<uint32_t, std::vector<uint32_t>> longest_sequence(std::vector<uint32_t> &vectr)
{
    uint32_t n = vectr.size();
    std::vector<uint32_t> a(n, 1); // таблица длин
    a[0] = 1;
    std::vector<uint32_t> pred(
        n, -1); // таблица предков, если надо вывести и саму подпоследовательность
    for (uint32_t i = 1; i < n; i++)
        for (uint32_t j = 0; j < i; j++)
            if (vectr[j] < vectr[i])
                if (a[j] + 1 > a[i])
                {
                    a[i] = a[j] + 1;
                    pred[i] = j;
                }

    uint32_t result_int = *max_element(a.begin(), a.end());

    std::vector<uint32_t> result;
    for (uint32_t cur = uint32_t(max_element(a.begin(), a.end()) - a.begin()); cur != -1;
         cur = pred[cur])
    {
        result.push_back(vectr[cur]);
    }
    std::reverse(result.begin(), result.end());
    return {result_int, result};
}