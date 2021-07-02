#include "longest_sequence.h"

#include <gtest/gtest.h>

TEST(longest_sequence, correct)
{
    std::vector<uint32_t> m = {2, 7, 5, 2, 3, 6, 8, 9, 32, 32, 5, 6, 3, 44, 1, 3, 5};
    std::vector<uint32_t> mresult = {2, 5, 6, 8, 9, 32, 44};
    auto result = longest_sequence(m);
    EXPECT_EQ(mresult, result.second);
}
TEST(longest_sequence, correct_result)
{
    std::vector<uint32_t> m = {2, 7, 5, 2, 3, 6, 8, 9, 32, 32, 5, 6, 3, 44, 1, 3, 5};
    auto result = longest_sequence(m);
    EXPECT_EQ(7, result.first);
}
