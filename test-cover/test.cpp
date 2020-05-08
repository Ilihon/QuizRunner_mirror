#include "../src/testload.h"
#include "../src/testwork.h"
#include "gtest/gtest.h"

struct quest test[10];
int right_answers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int score = 0;

TEST(LoadfilesTest, MissingFile)
{
    int result = loadfiles("files/MissingFile.txt");
    int expect = -1;
    EXPECT_EQ(expect, result);
}

TEST(LoadfilesTest, ExistingFile)
{
    int result = loadfiles("files/math.txt");
    int expect = 0;
    EXPECT_EQ(expect, result);
}

TEST(AnswerConvert, WrongInput)
{
    char buf[256] = "asd";
    int expect = 0;
    int result = answer_convert(buf);
    EXPECT_EQ(expect, result);
}

TEST(AnswerConvert, RightInput)
{
    char buf[256] = "3";
    int expect = 3;
    int result = answer_convert(buf);
    EXPECT_EQ(expect, result);
}

TEST(AnswerConvert, SemiRightInput)
{
    char buf[256] = "3fsda";
    int expect = 3;
    int result = answer_convert(buf);
    EXPECT_EQ(expect, result);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
