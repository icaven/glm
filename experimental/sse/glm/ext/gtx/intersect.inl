///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-04-03
// Updated : 2007-04-03
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/intersect.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType>
	inline bool intersectRayTriangleGTX(
		const genType& orig, const genType& dir,
		const genType& vert0, const genType& vert1, const genType& vert2,
		genType& position)
	{
//        typename genType::size_type result = typename genType::value_type(0);
//        typename genType::value_type pouet;

		typename genType::value_type Epsilon = std::numeric_limits<typename genType::value_type>::epsilon();

		genType edge1 = vert1 - vert0;
		genType edge2 = vert2 - vert0;

		genType pvec = cross(dir, edge2);

		float det = dot(edge1, pvec);
		if(det < Epsilon)
			return false;

		genType tvec = orig - vert0;

		position.y = dot(tvec, pvec);
		if (position.y < typename genType::value_type(0) || position.y > det)
			return genType::value_type(0);

		genType qvec = cross(tvec, edge1);

		position.z = dot(dir, qvec);
		if (position.z < typename genType::value_type(0) || position.y + position.z > det)
			return genType::value_type(0);

		position.x = dot(edge2, qvec);
		position *= typename genType::value_type(1) / det;

		return typename genType::value_type(1);
	}

	template <typename genType>
	inline bool intersectLineTriangleGTX(
		const genType& orig, const genType& dir,
		const genType& vert0, const genType& vert1, const genType& vert2,
		genType& position)
	{
        typename genType::value_type Epsilon = std::numeric_limits<typename genType::value_type>::epsilon();

		genType edge1 = vert1 - vert0;
		genType edge2 = vert2 - vert0;

		genType pvec = cross(dir, edge2);

		float det = dot(edge1, pvec);

		if (det > -Epsilon && det < Epsilon)
			return false;
		float inv_det = typename genType::value_type(1) / det;

		genType tvec = orig - vert0;

		position.y = dot(tvec, pvec) * inv_det;
		if (position.y < typename genType::value_type(0) || position.y > typename genType::value_type(1))
			return false;

		genType qvec = cross(tvec, edge1);

		position.z = dot(dir, qvec) * inv_det;
		if (position.z < typename genType::value_type(0) || position.y + position.z > typename genType::value_type(1))
			return false;

		position.x = dot(edge2, qvec) * inv_det;

		return true;
	}

	template <typename genType>
	inline bool intersectRaySphereGTX(
		const genType& orig, const genType& dir,
		const genType& center, GLMvalType radius,
		genType& position, genType& normal)
	{
		typename genType::value_type Epsilon = std::numeric_limits<typename genType::value_type>::epsilon();

		typename genType::value_type a = dot(position, position);
		typename genType::value_type b = typename genType::value_type(2) * dot(center, dir);
		typename genType::value_type c = dot(center, center) - radius * radius;
		typename genType::value_type d = b * b - typename genType::value_type(4) * a * c;
		typename genType::value_type e = sqrt(d);
		typename genType::value_type x1 = (-b - e) / (typename genType::value_type(2) * a);
		typename genType::value_type x2 = (-b - e) / (typename genType::value_type(2) * a);

		if(x1 > Epsilon)
		{
			position = orig + dir * radius;
			normal = (position - center) / radius;
			return true;
		}
		else if(x2 > Epsilon)
		{
			position = orig + dir * radius;
			normal = (position - center) / radius;
			return true;
		}
		return false;
	}

	template <typename genType>
	inline bool intersectLineSphereGTX(
		const genType& point0, const genType& point1,
		const genType& center, GLMvalType radius,
		genType& position, genType& normal)
	{
		typename genType::value_type Epsilon = std::numeric_limits<typename genType::value_type>::epsilon();

        genType dir = point1 - point0;
        typename genType::value_type a = dot(position, position);
		typename genType::value_type b = typename genType::value_type(2) * dot(center, dir);
		typename genType::value_type c = dot(center, center) - radius * radius;
		typename genType::value_type d = b * b - typename genType::value_type(4) * a * c;
		typename genType::value_type e = sqrt(d);
		typename genType::value_type x1 = (-b - e) / (typename genType::value_type(2) * a);
		typename genType::value_type x2 = (-b - e) / (typename genType::value_type(2) * a);

		if(x1 > Epsilon)
		{
			position = center + dir * radius;
			normal = (position - center) / radius;
			return true;
		}
		else if(x2 > Epsilon)
		{
			position = center + dir * radius;
			normal = (position - center) / radius;
			return true;
		}
		return false;
	}
}
