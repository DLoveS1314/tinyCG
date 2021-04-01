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

//�����������ķ�����
void threeCGAL::CalNormal(const Vec3d& v1, const Vec3d& v2, const Vec3d& v3, Vec3d &vn)
{
    //v1(n1,n2,n3);
    //ƽ�淽��: na * (x �C n1) + nb * (y �C n2) + nc * (z �C n3) = 0 ;
    double na = (v2.y()-v1.y())*(v3.z()-v1.z())-(v2.z()-v1.z())*(v3.y()-v1.y());
    double nb = (v2.z()-v1.z())*(v3.x()-v1.x())-(v2.x()-v1.x())*(v3.z()-v1.z());
    double nc = (v2.x()-v1.x())*(v3.y()-v1.y())-(v2.y()-v1.y())*(v3.x()-v1.x());

    //ƽ�淨����
    vn.set(na,nb,nc);
}

}
