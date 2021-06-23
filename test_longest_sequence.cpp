#include "longest_sequence.h"

#include <gtest/gtest.h>

TEST(longest_sequence, correct)
{  
    std::vector<uint32_t> v = {2, 6, 3, 4, 5, 1, 22, 55, 77, 8, 90, 231, 67, 22, 33, 46};
    EXPECT_EQ(longest_sequence(v), 4);
}
