#pragma once

#include <glm/glm.hpp>

namespace glm {
	// xx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xx(const glm::tvec1<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xx(const glm::tvec2<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xx(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xx(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.x);
	}

	// xy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xy(const glm::tvec2<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xy(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xy(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.y);
	}

	// xz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xz(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xz(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.z);
	}

	// xw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> xw(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.x, v.w);
	}

	// yx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yx(const glm::tvec2<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yx(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yx(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.x);
	}

	// yy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yy(const glm::tvec2<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yy(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yy(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.y);
	}

	// yz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yz(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yz(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.z);
	}

	// yw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> yw(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.y, v.w);
	}

	// zx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zx(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zx(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.x);
	}

	// zy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zy(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zy(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.y);
	}

	// zz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zz(const glm::tvec3<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zz(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.z);
	}

	// zw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> zw(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.z, v.w);
	}

	// wx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> wx(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.w, v.x);
	}

	// wy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> wy(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.w, v.y);
	}

	// wz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> wz(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.w, v.z);
	}

	// ww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec2<T, P> ww(const glm::tvec4<T, P> &v) {
		return glm::tvec2<T, P>(v.w, v.w);
	}

	// xxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxx(const glm::tvec1<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxx(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.x);
	}

	// xxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxy(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.y);
	}

	// xxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.z);
	}

	// xxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xxw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.x, v.w);
	}

	// xyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyx(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.x);
	}

	// xyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyy(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.y);
	}

	// xyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.z);
	}

	// xyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xyw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.y, v.w);
	}

	// xzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.x);
	}

	// xzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.y);
	}

	// xzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.z);
	}

	// xzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xzw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.z, v.w);
	}

	// xwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xwx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.w, v.x);
	}

	// xwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xwy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.w, v.y);
	}

	// xwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xwz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.w, v.z);
	}

	// xww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> xww(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.x, v.w, v.w);
	}

	// yxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxx(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.x);
	}

	// yxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxy(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.y);
	}

	// yxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.z);
	}

	// yxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yxw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.x, v.w);
	}

	// yyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyx(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.x);
	}

	// yyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyy(const glm::tvec2<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.y);
	}

	// yyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.z);
	}

	// yyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yyw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.y, v.w);
	}

	// yzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.x);
	}

	// yzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.y);
	}

	// yzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.z);
	}

	// yzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yzw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.z, v.w);
	}

	// ywx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> ywx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.w, v.x);
	}

	// ywy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> ywy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.w, v.y);
	}

	// ywz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> ywz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.w, v.z);
	}

	// yww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> yww(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.y, v.w, v.w);
	}

	// zxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.x);
	}

	// zxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.y);
	}

	// zxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.z);
	}

	// zxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zxw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.x, v.w);
	}

	// zyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.x);
	}

	// zyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.y);
	}

	// zyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.z);
	}

	// zyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zyw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.y, v.w);
	}

	// zzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzx(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.x);
	}

	// zzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzy(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.y);
	}

	// zzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzz(const glm::tvec3<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.z);
	}

	// zzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zzw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.z, v.w);
	}

	// zwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zwx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.w, v.x);
	}

	// zwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zwy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.w, v.y);
	}

	// zwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zwz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.w, v.z);
	}

	// zww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> zww(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.z, v.w, v.w);
	}

	// wxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wxx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.x, v.x);
	}

	// wxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wxy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.x, v.y);
	}

	// wxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wxz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.x, v.z);
	}

	// wxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wxw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.x, v.w);
	}

	// wyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wyx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.y, v.x);
	}

	// wyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wyy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.y, v.y);
	}

	// wyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wyz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.y, v.z);
	}

	// wyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wyw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.y, v.w);
	}

	// wzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wzx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.z, v.x);
	}

	// wzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wzy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.z, v.y);
	}

	// wzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wzz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.z, v.z);
	}

	// wzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wzw(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.z, v.w);
	}

	// wwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wwx(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.w, v.x);
	}

	// wwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wwy(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.w, v.y);
	}

	// wwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> wwz(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.w, v.z);
	}

	// www
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec3<T, P> www(const glm::tvec4<T, P> &v) {
		return glm::tvec3<T, P>(v.w, v.w, v.w);
	}

	// xxxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxx(const glm::tvec1<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.x);
	}

	// xxxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.y);
	}

	// xxxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.z);
	}

	// xxxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.x, v.w);
	}

	// xxyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.x);
	}

	// xxyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.y);
	}

	// xxyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.z);
	}

	// xxyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.y, v.w);
	}

	// xxzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.x);
	}

	// xxzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.y);
	}

	// xxzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.z);
	}

	// xxzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.z, v.w);
	}

	// xxwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.w, v.x);
	}

	// xxwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.w, v.y);
	}

	// xxwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.w, v.z);
	}

	// xxww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xxww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.x, v.w, v.w);
	}

	// xyxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.x);
	}

	// xyxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.y);
	}

	// xyxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.z);
	}

	// xyxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.x, v.w);
	}

	// xyyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.x);
	}

	// xyyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.y);
	}

	// xyyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.z);
	}

	// xyyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.y, v.w);
	}

	// xyzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.x);
	}

	// xyzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.y);
	}

	// xyzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.z);
	}

	// xyzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.z, v.w);
	}

	// xywx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xywx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.w, v.x);
	}

	// xywy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xywy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.w, v.y);
	}

	// xywz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xywz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.w, v.z);
	}

	// xyww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xyww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.y, v.w, v.w);
	}

	// xzxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.x);
	}

	// xzxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.y);
	}

	// xzxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.z);
	}

	// xzxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.x, v.w);
	}

	// xzyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.x);
	}

	// xzyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.y);
	}

	// xzyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.z);
	}

	// xzyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.y, v.w);
	}

	// xzzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.x);
	}

	// xzzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.y);
	}

	// xzzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.z);
	}

	// xzzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.z, v.w);
	}

	// xzwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.w, v.x);
	}

	// xzwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.w, v.y);
	}

	// xzwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.w, v.z);
	}

	// xzww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xzww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.z, v.w, v.w);
	}

	// xwxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.x, v.x);
	}

	// xwxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.x, v.y);
	}

	// xwxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.x, v.z);
	}

	// xwxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.x, v.w);
	}

	// xwyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.y, v.x);
	}

	// xwyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.y, v.y);
	}

	// xwyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.y, v.z);
	}

	// xwyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.y, v.w);
	}

	// xwzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.z, v.x);
	}

	// xwzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.z, v.y);
	}

	// xwzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.z, v.z);
	}

	// xwzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.z, v.w);
	}

	// xwwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.w, v.x);
	}

	// xwwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.w, v.y);
	}

	// xwwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.w, v.z);
	}

	// xwww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> xwww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.x, v.w, v.w, v.w);
	}

	// yxxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.x);
	}

	// yxxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.y);
	}

	// yxxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.z);
	}

	// yxxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.x, v.w);
	}

	// yxyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.x);
	}

	// yxyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.y);
	}

	// yxyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.z);
	}

	// yxyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.y, v.w);
	}

	// yxzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.x);
	}

	// yxzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.y);
	}

	// yxzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.z);
	}

	// yxzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.z, v.w);
	}

	// yxwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.w, v.x);
	}

	// yxwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.w, v.y);
	}

	// yxwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.w, v.z);
	}

	// yxww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yxww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.x, v.w, v.w);
	}

	// yyxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.x);
	}

	// yyxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.y);
	}

	// yyxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.z);
	}

	// yyxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.x, v.w);
	}

	// yyyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyx(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.x);
	}

	// yyyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyy(const glm::tvec2<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.y);
	}

	// yyyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.z);
	}

	// yyyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.y, v.w);
	}

	// yyzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.x);
	}

	// yyzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.y);
	}

	// yyzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.z);
	}

	// yyzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.z, v.w);
	}

	// yywx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yywx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.w, v.x);
	}

	// yywy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yywy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.w, v.y);
	}

	// yywz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yywz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.w, v.z);
	}

	// yyww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yyww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.y, v.w, v.w);
	}

	// yzxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.x);
	}

	// yzxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.y);
	}

	// yzxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.z);
	}

	// yzxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.x, v.w);
	}

	// yzyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.x);
	}

	// yzyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.y);
	}

	// yzyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.z);
	}

	// yzyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.y, v.w);
	}

	// yzzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.x);
	}

	// yzzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.y);
	}

	// yzzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.z);
	}

	// yzzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.z, v.w);
	}

	// yzwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.w, v.x);
	}

	// yzwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.w, v.y);
	}

	// yzwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.w, v.z);
	}

	// yzww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> yzww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.z, v.w, v.w);
	}

	// ywxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.x, v.x);
	}

	// ywxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.x, v.y);
	}

	// ywxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.x, v.z);
	}

	// ywxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.x, v.w);
	}

	// ywyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.y, v.x);
	}

	// ywyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.y, v.y);
	}

	// ywyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.y, v.z);
	}

	// ywyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.y, v.w);
	}

	// ywzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.z, v.x);
	}

	// ywzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.z, v.y);
	}

	// ywzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.z, v.z);
	}

	// ywzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.z, v.w);
	}

	// ywwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.w, v.x);
	}

	// ywwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.w, v.y);
	}

	// ywwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.w, v.z);
	}

	// ywww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> ywww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.y, v.w, v.w, v.w);
	}

	// zxxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.x);
	}

	// zxxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.y);
	}

	// zxxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.z);
	}

	// zxxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.x, v.w);
	}

	// zxyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.x);
	}

	// zxyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.y);
	}

	// zxyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.z);
	}

	// zxyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.y, v.w);
	}

	// zxzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.x);
	}

	// zxzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.y);
	}

	// zxzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.z);
	}

	// zxzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.z, v.w);
	}

	// zxwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.w, v.x);
	}

	// zxwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.w, v.y);
	}

	// zxwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.w, v.z);
	}

	// zxww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zxww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.x, v.w, v.w);
	}

	// zyxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.x);
	}

	// zyxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.y);
	}

	// zyxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.z);
	}

	// zyxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.x, v.w);
	}

	// zyyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.x);
	}

	// zyyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.y);
	}

	// zyyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.z);
	}

	// zyyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.y, v.w);
	}

	// zyzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.x);
	}

	// zyzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.y);
	}

	// zyzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.z);
	}

	// zyzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.z, v.w);
	}

	// zywx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zywx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.w, v.x);
	}

	// zywy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zywy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.w, v.y);
	}

	// zywz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zywz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.w, v.z);
	}

	// zyww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zyww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.y, v.w, v.w);
	}

	// zzxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.x);
	}

	// zzxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.y);
	}

	// zzxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.z);
	}

	// zzxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.x, v.w);
	}

	// zzyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.x);
	}

	// zzyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.y);
	}

	// zzyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.z);
	}

	// zzyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.y, v.w);
	}

	// zzzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzx(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.x);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.x);
	}

	// zzzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzy(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.y);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.y);
	}

	// zzzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzz(const glm::tvec3<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.z);
	}

	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.z);
	}

	// zzzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.z, v.w);
	}

	// zzwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.w, v.x);
	}

	// zzwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.w, v.y);
	}

	// zzwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.w, v.z);
	}

	// zzww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zzww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.z, v.w, v.w);
	}

	// zwxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.x, v.x);
	}

	// zwxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.x, v.y);
	}

	// zwxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.x, v.z);
	}

	// zwxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.x, v.w);
	}

	// zwyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.y, v.x);
	}

	// zwyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.y, v.y);
	}

	// zwyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.y, v.z);
	}

	// zwyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.y, v.w);
	}

	// zwzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.z, v.x);
	}

	// zwzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.z, v.y);
	}

	// zwzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.z, v.z);
	}

	// zwzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.z, v.w);
	}

	// zwwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.w, v.x);
	}

	// zwwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.w, v.y);
	}

	// zwwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.w, v.z);
	}

	// zwww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> zwww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.z, v.w, v.w, v.w);
	}

	// wxxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.x, v.x);
	}

	// wxxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.x, v.y);
	}

	// wxxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.x, v.z);
	}

	// wxxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.x, v.w);
	}

	// wxyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.y, v.x);
	}

	// wxyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.y, v.y);
	}

	// wxyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.y, v.z);
	}

	// wxyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.y, v.w);
	}

	// wxzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.z, v.x);
	}

	// wxzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.z, v.y);
	}

	// wxzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.z, v.z);
	}

	// wxzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.z, v.w);
	}

	// wxwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.w, v.x);
	}

	// wxwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.w, v.y);
	}

	// wxwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.w, v.z);
	}

	// wxww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wxww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.x, v.w, v.w);
	}

	// wyxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.x, v.x);
	}

	// wyxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.x, v.y);
	}

	// wyxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.x, v.z);
	}

	// wyxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.x, v.w);
	}

	// wyyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.y, v.x);
	}

	// wyyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.y, v.y);
	}

	// wyyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.y, v.z);
	}

	// wyyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.y, v.w);
	}

	// wyzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.z, v.x);
	}

	// wyzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.z, v.y);
	}

	// wyzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.z, v.z);
	}

	// wyzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.z, v.w);
	}

	// wywx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wywx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.w, v.x);
	}

	// wywy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wywy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.w, v.y);
	}

	// wywz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wywz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.w, v.z);
	}

	// wyww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wyww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.y, v.w, v.w);
	}

	// wzxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.x, v.x);
	}

	// wzxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.x, v.y);
	}

	// wzxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.x, v.z);
	}

	// wzxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.x, v.w);
	}

	// wzyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.y, v.x);
	}

	// wzyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.y, v.y);
	}

	// wzyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.y, v.z);
	}

	// wzyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.y, v.w);
	}

	// wzzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.z, v.x);
	}

	// wzzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.z, v.y);
	}

	// wzzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.z, v.z);
	}

	// wzzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.z, v.w);
	}

	// wzwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.w, v.x);
	}

	// wzwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.w, v.y);
	}

	// wzwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.w, v.z);
	}

	// wzww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wzww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.z, v.w, v.w);
	}

	// wwxx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwxx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.x, v.x);
	}

	// wwxy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwxy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.x, v.y);
	}

	// wwxz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwxz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.x, v.z);
	}

	// wwxw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwxw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.x, v.w);
	}

	// wwyx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwyx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.y, v.x);
	}

	// wwyy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwyy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.y, v.y);
	}

	// wwyz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwyz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.y, v.z);
	}

	// wwyw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwyw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.y, v.w);
	}

	// wwzx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwzx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.z, v.x);
	}

	// wwzy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwzy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.z, v.y);
	}

	// wwzz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwzz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.z, v.z);
	}

	// wwzw
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwzw(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.z, v.w);
	}

	// wwwx
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwwx(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.w, v.x);
	}

	// wwwy
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwwy(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.w, v.y);
	}

	// wwwz
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwwz(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.w, v.z);
	}

	// wwww
	template<class T, precision P = defaultp>
	GLM_INLINE glm::tvec4<T, P> wwww(const glm::tvec4<T, P> &v) {
		return glm::tvec4<T, P>(v.w, v.w, v.w, v.w);
	}

}
