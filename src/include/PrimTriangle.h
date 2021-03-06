// Triangle Geaometrical Primitive class
// Written by Sergey Kosov in 2005 for Rendering Competition
#pragma once

#include "IPrim.h"
#include "ray.h"

// ================================ Triangle Primitive Class ================================
/**
 * @brief Triangle Geometrical Primitive class
 * @ingroup modulePrimitive
 * @author Sergey G. Kosov, sergey.kosov@project-10.de
 */
class CPrimTriangle : public IPrim {
public:
    /**
     * @brief Constructor
     * @param a Position of the first vertex
     * @param b Position of the second vertex
     * @param c Position of the third vertex
     */
    CPrimTriangle(const Vec3f &a, const Vec3f &b, const Vec3f &c);

    ~CPrimTriangle() override;

    bool intersect(Ray &ray) const override;


private:
    Vec3f m_a;        ///< Position of the first vertex
    Vec3f m_b;        ///< Position of the second vertex
    Vec3f m_c;        ///< Position of the third vertex

    Vec3f m_ab;        ///< The AB edge.
    Vec3f m_ac;        ///< The AC edge.
};
