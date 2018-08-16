namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> rotate(qua<T, Q> const& q, T const& angle, vec<3, T, Q> const& v)
	{
		vec<3, T, Q> Tmp = v;

		// Axis of rotation must be normalised
		T len = glm::length(Tmp);
		if(abs(len - static_cast<T>(1)) > static_cast<T>(0.001))
		{
			T oneOverLen = static_cast<T>(1) / len;
			Tmp.x *= oneOverLen;
			Tmp.y *= oneOverLen;
			Tmp.z *= oneOverLen;
		}

		T const AngleRad(angle);
		T const Sin = sin(AngleRad * static_cast<T>(0.5));

		return q * qua<T, Q>(cos(AngleRad * static_cast<T>(0.5)), Tmp.x * Sin, Tmp.y * Sin, Tmp.z * Sin);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> quatLookAt(vec<3, T, Q> const& direction, vec<3, T, Q> const& up)
	{
#		if GLM_CONFIG_CLIP_CONTROL & GLM_CLIP_CONTROL_LH_BIT
			return quatLookAtLH(direction, up);
#		else
			return quatLookAtRH(direction, up);
# 		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> quatLookAtRH(vec<3, T, Q> const& direction, vec<3, T, Q> const& up)
	{
		mat<3, 3, T, Q> Result;

		Result[2] = -direction;
		Result[0] = normalize(cross(up, Result[2]));
		Result[1] = cross(Result[2], Result[0]);

		return quat_cast(Result);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> quatLookAtLH(vec<3, T, Q> const& direction, vec<3, T, Q> const& up)
	{
		mat<3, 3, T, Q> Result;

		Result[2] = direction;
		Result[0] = normalize(cross(up, Result[2]));
		Result[1] = cross(Result[2], Result[0]);

		return quat_cast(Result);
	}
}//namespace glm

