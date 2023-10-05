#include "classify.h"

int classify(double avg_score, int conduct)
{
    if (avg_score > 10 || avg_score < 0)
    {
        return -1;
    }

    if (conduct > 2 || conduct < 0)
    {
        return -1;
    }

    if (avg_score >= 8 && conduct == 2)
    {
        return 2;
    }

    if (avg_score >= 6.5 && (conduct == 1 || conduct == 2))
    {
        return 1;
    }

    return 0;
}