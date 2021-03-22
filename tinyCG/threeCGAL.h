#ifndef THREECGAL_H
#define THREECGAL_H

#include "tinyCG_global.h"
#include "Vec3.hpp"

//��ά���㼸���㷨

namespace tinyCG
{

class TINYCG_EXPORT threeCGAL
{
public:
    threeCGAL();

    //�������ֱ�ߵľ���
    static double CalDistancePointAndLine(Vec3d &point, Vec3d &lineBegin, Vec3d &lineEnd);
};

}

#endif // THREECGAL_H
