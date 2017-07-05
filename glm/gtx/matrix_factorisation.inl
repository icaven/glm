/// @ref gtx_matrix_factorisation
/// @file glm/gtx/matrix_factorisation.inl

namespace glm {
	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_QUALIFIER matType<C, R, T, P> flipud(const matType<C, R, T, P>& in) {
		matType<R, C, T, P> tin = transpose(in);
		tin = fliplr(tin);
		matType<C, R, T, P> out = transpose(tin);

		return out;
	}

	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_QUALIFIER matType<C, R, T, P> fliplr(const matType<C, R, T, P>& in) {
		constexpr length_t num_cols = C;

		matType<C, R, T, P> out;
		for (length_t i = 0; i < num_cols; i++) {
			out[i] = in[(num_cols - i) - 1];
		}

		return out;
	}

	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_QUALIFIER void qr_decompose(matType<std::min(C, R), R, T, P>& q, matType<C, std::min(C, R), T, P>& r, const matType<C, R, T, P>& in) {
		// Uses modified Gram-Schmidt method
		// Source: https://en.wikipedia.org/wiki/Gram–Schmidt_process
		// And https://en.wikipedia.org/wiki/QR_decomposition

		for (length_t i = 0; i < std::min(R, C); i++) {
			q[i] = in[i];

			for (length_t j = 0; j < i; j++) {
				q[i] -= dot(q[i], q[j])*q[j];
			}

			q[i] = normalize(q[i]);
		}

		for (length_t i = 0; i < std::min(R, C); i++) {
			for (length_t j = 0; j < i; j++) {
				r[j][i] = 0;
			}

			for (length_t j = i; j < C; j++) {
				r[j][i] = dot(in[j], q[i]);
			}
		}
	}

	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_QUALIFIER void rq_decompose(matType<std::min(C, R), R, T, P>& r, matType<C, std::min(C, R), T, P>& q, const matType<C, R, T, P>& in) {
		// From https://en.wikipedia.org/wiki/QR_decomposition:
		// The RQ decomposition transforms a matrix A into the product of an upper triangular matrix R (also known as right-triangular) and an orthogonal matrix Q. The only difference from QR decomposition is the order of these matrices.
		// QR decomposition is Gram–Schmidt orthogonalization of columns of A, started from the first column.
		// RQ decomposition is Gram–Schmidt orthogonalization of rows of A, started from the last row.

		matType<R, C, T, P> tin = transpose(in);
		tin = fliplr(tin);

		matType<R, std::min(C, R), T, P> tr;
		matType<std::min(C, R), C, T, P> tq;
		qr_decompose(tq, tr, tin);

		tr = fliplr(tr);
		r = transpose(tr);
		r = fliplr(r);

		tq = fliplr(tq);
		q = transpose(tq);
	}
} //namespace glm
