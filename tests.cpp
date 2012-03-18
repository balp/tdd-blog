#include "timeofday.h"
#include "gtest/gtest.h"

TEST(timeofday, midnighthavehourzero) {
    TimeOfDay test(12, 0);
    EXPECT_EQ(12, test.hour());
}
