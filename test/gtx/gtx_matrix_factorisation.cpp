#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/matrix_factorisation.hpp>

const double epsilon = 1e-10f;

template <glm::length_t C, glm::length_t R, typename T, glm::precision P, template<glm::length_t, glm::length_t, typename, glm::precision> class matType>
int test_qr(matType<C, R, T, P> m) {
	matType<(C < R ? C : R), R, T, P> q(-999);
	matType<C, (C < R ? C : R), T, P> r(-999);

	glm::qr_decompose(q, r, m);

	//Test if q*r really equals the input matrix
	matType<C, R, T, P> tm = q*r;
	matType<C, R, T, P> err = tm - m;

	for (glm::length_t i = 0; i < C; i++) {
		for (glm::length_t j = 0; j < R; j++) {
			if (abs(err[i][j]) > epsilon) return 1;
		}
	}

	//Test if the columns of q are orthonormal
	for (glm::length_t i = 0; i < (C < R ? C : R); i++) {
		if ((length(q[i]) - 1) > epsilon) return 2;

		for (glm::length_t j = 0; j<i; j++) {
			if (abs(dot(q[i], q[j])) > epsilon) return 3;
		}
	}

	//Test if the matrix r is upper triangular
	for (glm::length_t i = 0; i < C; i++) {
		for (glm::length_t j = i + 1; j < (C < R ? C : R); j++) {
			if (r[i][j] != 0) return 4;
		}
	}

	return 0;
}

template <glm::length_t C, glm::length_t R, typename T, glm::precision P, template<glm::length_t, glm::length_t, typename, glm::precision> class matType>
int test_rq(matType<C, R, T, P> m) {
	matType<C, (C < R ? C : R), T, P> q(-999);
	matType<(C < R ? C : R), R, T, P> r(-999);

	glm::rq_decompose(r, q, m);

	//Test if q*r really equals the input matrix
	matType<C, R, T, P> tm = r*q;
	matType<C, R, T, P> err = tm - m;
	
	for (glm::length_t i = 0; i < C; i++) {
		for (glm::length_t j = 0; j < R; j++) {
			if (abs(err[i][j]) > epsilon) return 1;
		}
	}
	
	
	//Test if the rows of q are orthonormal
	matType<(C < R ? C : R), C, T, P> tq = transpose(q);

	for (glm::length_t i = 0; i < (C < R ? C : R); i++) {
		if ((length(tq[i]) - 1) > epsilon) return 2;

		for (glm::length_t j = 0; j<i; j++) {
			if (abs(dot(tq[i], tq[j])) > epsilon) return 3;
		}
	}
	
	//Test if the matrix r is upper triangular
	for (glm::length_t i = 0; i < (C < R ? C : R); i++) {
		for (glm::length_t j = R - (C < R ? C : R) + i + 1; j < R; j++) {
			if (r[i][j] != 0) return 4;
		}
	}

	return 0;
}

int main()
{
	
	//Test QR square
	if(test_qr(glm::dmat3(12, 6, -4, -51, 167, 24, 4, -68, -41))) return 1;

	//Test RQ square
	if (test_rq(glm::dmat3(12, 6, -4, -51, 167, 24, 4, -68, -41))) return 2;

	//Test QR triangular 1
	if (test_qr(glm::dmat3x4(12, 6, -4, -51, 167, 24, 4, -68, -41, 7, 2, 15))) return 3;

	//Test QR triangular 2
	if (test_qr(glm::dmat4x3(12, 6, -4, -51, 167, 24, 4, -68, -41, 7, 2, 15))) return 4;

	//Test RQ triangular 1 : Fails at the triangular test
	if (test_rq(glm::dmat3x4(12, 6, -4, -51, 167, 24, 4, -68, -41, 7, 2, 15))) return 5;

	//Test QR triangular 2
	if (test_rq(glm::dmat4x3(12, 6, -4, -51, 167, 24, 4, -68, -41, 7, 2, 15))) return 6;

	return 0;
}
