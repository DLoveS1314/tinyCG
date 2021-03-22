#include "threeCGAL.h"

namespace tinyCG
{

threeCGAL::threeCGAL()
{

}

double threeCGAL::CalDistancePointAndLine(Vec3d &point, Vec3d &lineBegin, Vec3d &lineEnd)
{
    ////https://www.zhihu.com/question/322449140/answer/668978444
    ////https://www.sohu.com/a/123540090_518695

    //ֱ�߷�������
    Vec3d n = lineEnd -lineBegin;

    //�㵽ֱ����ĳһ�������
    Vec3d m = lineBegin - point;

    return (n ^ m).length() / n.length();

//    Vec3d AP = point - lineBegin;
//    double d = AP * n / n.length();

//    return sqrt(AP.length2() - d * d);
}

}
