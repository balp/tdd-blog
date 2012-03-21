#include "timeofday.h"
#include "gtest/gtest.h"

TEST(timeofday, midnighthavehourzero) {
    int hour = 12;
    TimeOfDay test(hour, 0);
    EXPECT_EQ(hour, test.hour());
}
