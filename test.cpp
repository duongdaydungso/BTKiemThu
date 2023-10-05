#include "classify.h"
#include <vector>
#include <iostream>

struct testcase
{
    int test_id;
    double avg_score;
    int conduct;
    int stu_class;

    testcase(int test_id_, double avg_score_, int conduct_, int stu_class_)
    {
        test_id = test_id_;
        avg_score = avg_score_;
        conduct = conduct_;
        stu_class = stu_class_;
    }

    void check()
    {
        std::cout << "Test case " << test_id
                  << ": avg_score = " << avg_score
                  << ", conduct = " << conduct
                  << ", stu_class = " << stu_class;

        int output = classify(avg_score, conduct);

        if (output == stu_class)
        {
            std::cout << ", SUCCESS" << std::endl;
        }
        else
        {
            std::cout << ", FAIL, output = " << output << std::endl;
        }
    }
};

std::vector<testcase> kiem_thu_phan_hoach{
    {1, -1.0, -3, -1},
    {2, -1.0, 0, -1},
    {3, -1.0, 1, -1},
    {4, -1.0, 2, -1},
    {5, -1.0, 4, -1},
    {6, 3.0, -3, -1},
    {7, 3.0, 0, 0},
    {8, 3.0, 1, 0},
    {9, 3.0, 2, 0},
    {10, 3.0, 4, -1},
    {11, 7.0, -3, -1},
    {12, 7.0, 0, 0},
    {13, 7.0, 1, 1},
    {14, 7.0, 2, 1},
    {15, 7.0, 4, -1},
    {16, 9.0, -3, -1},
    {17, 9.0, 0, 0},
    {18, 9.0, 1, 1},
    {19, 9.0, 2, 2},
    {20, 9.0, 4, -1},
    {21, 11.5, -3, -1},
    {22, 11.5, 0, -1},
    {23, 11.5, 1, -1},
    {24, 11.5, 2, -1},
    {25, 11.5, 4, -1},
};

std::vector<testcase> kiem_thu_bang_gia_tri{
    {1, -1.0, -3, -1},
    {2, 3.0, -3, -1},
    {3, 3.0, 0, 0},
    {4, 7.0, -3, -1},
    {5, 7.0, 0, 0},
    {6, 7.0, 1, 1},
    {7, 9.0, -3, -1},
    {8, 9.0, 0, 0},
    {9, 9.0, 1, 1},
    {10, 9.0, 2, 2},
    {11, 11.5, -3, -1},
};

std::vector<testcase> kiem_thu_do_phu_c2{
    {1, -1.0, 3, -1}, {2, 4.0, 3, -1}, {3, 9.0, 2, 2}, {4, 7.0, 1, 1}, {5, 5.0, 1, 0}};

int main()
{
    std::cout << "Kiem thu phan hoach tuong duong" << std::endl;

    for (int i = 0; i < kiem_thu_phan_hoach.size(); i++)
    {
        kiem_thu_phan_hoach[i].check();
    }

    std::cout << "Kiem thu bang gia tri" << std::endl;

    for (int i = 0; i < kiem_thu_bang_gia_tri.size(); i++)
    {
        kiem_thu_bang_gia_tri[i].check();
    }

    std::cout << "Kiem thu do phu c2" << std::endl;

    for (int i = 0; i < kiem_thu_do_phu_c2.size(); i++)
    {
        kiem_thu_do_phu_c2[i].check();
    }
}