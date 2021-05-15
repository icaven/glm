#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtx/pca.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtx/string_cast.hpp>

#include <cstdio>
#include <vector>
#if GLM_HAS_CXX11_STL == 1
#include <random>
#endif

template<typename T>
T myEpsilon();
template<>
GLM_INLINE GLM_CONSTEXPR float myEpsilon<float>() { return 0.00001f; }
template<>
GLM_INLINE GLM_CONSTEXPR double myEpsilon<double>() { return 0.000001; }

template<typename T>
T myEpsilon2();
template<>
GLM_INLINE GLM_CONSTEXPR float myEpsilon2<float>() { return 0.01f; }
template<>
GLM_INLINE GLM_CONSTEXPR double myEpsilon2<double>() { return 0.000001; }


template<glm::length_t D, typename T, glm::qualifier Q>
bool vectorEpsilonEqual(glm::vec<D, T, Q> const& a, glm::vec<D, T, Q> const& b)
{
	for (int c = 0; c < D; ++c)
		if (!glm::epsilonEqual(a[c], b[c], myEpsilon<T>()))
			return false;
	return true;
}

template<glm::length_t D, typename T, glm::qualifier Q>
bool matrixEpsilonEqual(glm::mat<D, D, T, Q> const& a, glm::mat<D, D, T, Q> const& b)
{
	for (int c = 0; c < D; ++c)
		for (int r = 0; r < D; ++r)
			if (!glm::epsilonEqual(a[c][r], b[c][r], myEpsilon<T>()))
				return false;
	return true;
}

template<typename T>
T failReport(T line)
{
	fprintf(stderr, "Failed in line %d\n", static_cast<int>(line));
	return line;
}

// Test data: 1AGA 'agarose double helix'
// https://www.rcsb.org/structure/1aga
// The fourth coordinate is randomized
namespace _1aga
{

	// Fills `outTestData` with hard-coded atom positions from 1AGA
	// The fourth coordinate is randomized
	template<typename vec>
	void fillTestData(std::vector<vec>& outTestData)
	{
		// x,y,z coordinates copied from RCSB PDB file of 1AGA
		// w coordinate randomized with standard normal distribution
		static const double _1aga[] = {
			3.219, -0.637, 19.462, 2.286,
			4.519, 0.024, 18.980, -0.828,
			4.163, 1.425, 18.481, -0.810,
			3.190, 1.341, 17.330, -0.170,
			1.962, 0.991, 18.165, 0.816,
			2.093, 1.952, 19.331, 0.276,
			5.119, -0.701, 17.908, -0.490,
			3.517, 2.147, 19.514, -0.207,
			2.970, 2.609, 16.719, 0.552,
			2.107, -0.398, 18.564, 0.403,
			2.847, 2.618, 15.335, 0.315,
			1.457, 3.124, 14.979, 0.683,
			1.316, 3.291, 13.473, 0.446,
			2.447, 4.155, 12.931, 1.324,
			3.795, 3.614, 13.394, 0.112,
			4.956, 4.494, 12.982, 0.253,
			0.483, 2.217, 15.479, 1.316,
			0.021, 3.962, 13.166, 1.522,
			2.311, 5.497, 13.395, 0.248,
			3.830, 3.522, 14.827, 0.591,
			5.150, 4.461, 11.576, 0.635,
			-1.057, 3.106, 13.132, 0.191,
			-2.280, 3.902, 12.650, 1.135,
			-3.316, 2.893, 12.151, 0.794,
			-2.756, 2.092, 11.000, 0.720,
			-1.839, 1.204, 11.835, -1.172,
			-2.737, 0.837, 13.001, -0.313,
			-1.952, 4.784, 11.578, 2.082,
			-3.617, 1.972, 13.184, 0.653,
			-3.744, 1.267, 10.389, -0.413,
			-0.709, 2.024, 12.234, -1.747,
			-3.690, 1.156, 9.005, -1.275,
			-3.434, -0.300, 8.649, 0.441,
			-3.508, -0.506, 7.143, 0.237,
			-4.822, 0.042, 6.601, -2.856,
			-5.027, 1.480, 7.064, 0.985,
			-6.370, 2.045, 6.652, 0.915,
			-2.162, -0.690, 9.149, 1.100,
			-3.442, -1.963, 6.836, -0.081,
			-5.916, -0.747, 7.065, -2.345,
			-4.965, 1.556, 8.497, 0.504,
			-6.439, 2.230, 5.246, 1.451,
			-2.161, -2.469, 6.802, -1.171,
			-2.239, -3.925, 6.320, -1.434,
			-0.847, -4.318, 5.821, 0.098,
			-0.434, -3.433, 4.670, -1.446,
			-0.123, -2.195, 5.505, 0.182,
			0.644, -2.789, 6.671, 0.865,
			-3.167, -4.083, 5.248, -0.098,
			0.101, -4.119, 6.854, -0.001,
			0.775, -3.876, 4.059, 1.061,
			-1.398, -1.625, 5.904, 0.230,
			0.844, -3.774, 2.675, 1.313,
			1.977, -2.824, 2.319, -0.112,
			2.192, -2.785, 0.813, -0.981,
			2.375, -4.197, 0.271, -0.355,
			1.232, -5.093, 0.734, 0.632,
			1.414, -6.539, 0.322, 0.576,
			1.678, -1.527, 2.819, -1.187,
			3.421, -1.999, 0.496, -1.770,
			3.605, -4.750, 0.735, 1.099,
			1.135, -5.078, 2.167, 0.854,
			1.289, -6.691, -1.084, -0.487,
			-1.057, 3.106, 22.602, -1.297,
			-2.280, 3.902, 22.120, 0.376,
			-3.316, 2.893, 21.621, 0.932,
			-2.756, 2.092, 20.470, 1.680,
			-1.839, 1.204, 21.305, 0.615,
			-2.737, 0.837, 22.471, 0.899,
			-1.952, 4.784, 21.048, -0.521,
			-3.617, 1.972, 22.654, 0.133,
			-3.744, 1.267, 19.859, 0.081,
			-0.709, 2.024, 21.704, 1.420,
			-3.690, 1.156, 18.475, -0.850,
			-3.434, -0.300, 18.119, -0.249,
			-3.508, -0.506, 16.613, 1.434,
			-4.822, 0.042, 16.071, -2.466,
			-5.027, 1.480, 16.534, -1.045,
			-6.370, 2.045, 16.122, 1.707,
			-2.162, -0.690, 18.619, -2.023,
			-3.442, -1.963, 16.336, -0.304,
			-5.916, -0.747, 16.535, 0.979,
			-4.965, 1.556, 17.967, -1.165,
			-6.439, 2.230, 14.716, 0.929,
			-2.161, -2.469, 16.302, -0.234,
			-2.239, -3.925, 15.820, -0.228,
			-0.847, -4.318, 15.321, 1.844,
			-0.434, -3.433, 14.170, 1.132,
			-0.123, -2.195, 15.005, 0.211,
			0.644, -2.789, 16.171, -0.632,
			-3.167, -4.083, 14.748, -0.519,
			0.101, -4.119, 16.354, 0.173,
			0.775, -3.876, 13.559, 1.243,
			-1.398, -1.625, 15.404, -0.187,
			0.844, -3.774, 12.175, -1.332,
			1.977, -2.824, 11.819, -1.616,
			2.192, -2.785, 10.313, 1.320,
			2.375, -4.197, 9.771, 0.237,
			1.232, -5.093, 10.234, 0.851,
			1.414, -6.539, 9.822, 1.816,
			1.678, -1.527, 12.319, -1.657,
			3.421, -1.999, 10.036, 1.559,
			3.605, -4.750, 10.235, 0.831,
			1.135, -5.078, 11.667, 0.060,
			1.289, -6.691, 8.416, 1.066,
			3.219, -0.637, 10.002, 2.111,
			4.519, 0.024, 9.520, -0.874,
			4.163, 1.425, 9.021, -1.012,
			3.190, 1.341, 7.870, -0.250,
			1.962, 0.991, 8.705, -1.359,
			2.093, 1.952, 9.871, -0.126,
			5.119, -0.701, 8.448, 0.995,
			3.517, 2.147, 10.054, 0.941,
			2.970, 2.609, 7.259, -0.562,
			2.107, -0.398, 9.104, -0.038,
			2.847, 2.618, 5.875, 0.398,
			1.457, 3.124, 5.519, 0.481,
			1.316, 3.291, 4.013, -0.187,
			2.447, 4.155, 3.471, -0.429,
			3.795, 3.614, 3.934, -0.432,
			4.956, 4.494, 3.522, -0.788,
			0.483, 2.217, 6.019, -0.923,
			0.021, 3.962, 3.636, -0.316,
			2.311, 5.497, 3.935, -1.917,
			3.830, 3.522, 5.367, -0.302,
			5.150, 4.461, 2.116, -1.615
		};
		static const glm::length_t _1agaSize = sizeof(_1aga) / (4 * sizeof(double));

		outTestData.resize(_1agaSize);
		for(glm::length_t i = 0; i < _1agaSize; ++i)
			for(glm::length_t d = 0; d < static_cast<glm::length_t>(vec::length()); ++d)
				outTestData[i][d] = static_cast<typename vec::value_type>(_1aga[i * 4 + d]);
	}

	void getExpectedCovarDataPtr(const double*& ptr)
	{
		static const double _1agaCovar4x4d[] = {
			9.624340680272107, -0.000066573696146, -4.293213765684049, 0.018793741874528,
			-0.000066573696146, 9.624439378684805, 5.351138726379443, -0.115692591458806,
			-4.293213765684049, 5.351138726379443, 35.628485496346691, 0.908742392542202,
			0.018793741874528, -0.115692591458806, 0.908742392542202, 1.097059718568909
		};
		ptr = _1agaCovar4x4d;
	}
	void getExpectedCovarDataPtr(const float*& ptr)
	{
		// note: the value difference to `_1agaCovar4x4d` is due to the numeric error propagation during computation of the covariance matrix.
		static const float _1agaCovar4x4f[] = {
			9.624336242675781f, -0.000066711785621f, -4.293214797973633f, 0.018793795257807f,
			-0.000066711785621f, 9.624438285827637f, 5.351140022277832f, -0.115692682564259f,
			-4.293214797973633f, 5.351140022277832f, 35.628479003906250f, 0.908742427825928f,
			0.018793795257807f, -0.115692682564259f, 0.908742427825928f, 1.097059369087219f
		};
		ptr = _1agaCovar4x4f;
	}

	template<glm::length_t D, typename T, glm::qualifier Q>
	int checkCovarMat(glm::mat<D, D, T, Q> const& covarMat)
	{
		const T* expectedCovarData = GLM_NULLPTR;
		getExpectedCovarDataPtr(expectedCovarData);
		for(glm::length_t x = 0; x < D; ++x)
			for(glm::length_t y = 0; y < D; ++y)
				if(!glm::equal(covarMat[y][x], expectedCovarData[x * 4 + y], myEpsilon<T>()))
				{
					fprintf(stderr, "E: %.15lf != %.15lf ; diff: %.20lf\n",
						static_cast<double>(covarMat[y][x]),
						static_cast<double>(expectedCovarData[x * 4 + y]),
						static_cast<double>(covarMat[y][x] - expectedCovarData[x * 4 + y])
					);
					return failReport(__LINE__);
				}
		return 0;
	}

	template<glm::length_t D, typename T> void getExpectedEigenvaluesEigenvectorsDataPtr(const T*& evals, const T*& evecs);
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<2, float>(const float*& evals, const float*& evecs)
	{
		static const float expectedEvals[] = {
			9.624471664428711f, 9.624302864074707f
		};
		static const float expectedEvecs[] = {
			-0.443000972270966f, 0.896521151065826f,
			0.896521151065826f, 0.443000972270966f
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<2, double>(const double*& evals, const double*& evecs)
	{
		static const double expectedEvals[] = {
			9.624472899262972, 9.624307159693940
		};
		static const double expectedEvecs[] = {
			-0.449720461624363, 0.893169360421846,
			0.893169360421846, 0.449720461624363
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<3, float>(const float*& evals, const float*& evecs)
	{
		static const float expectedEvals[] = {
			37.327442169189453f, 9.624311447143555f, 7.925499439239502f
		};
		static const float expectedEvecs[] = {
			-0.150428697466850f, 0.187497511506081f, 0.970678031444550f,
			0.779980957508087f, 0.625803351402283f, -0.000005212802080f,
			0.607454538345337f, -0.757109522819519f, 0.240383237600327f
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<3, double>(const double*& evals, const double*& evecs)
	{
		static const double expectedEvals[] = {
			37.327449427468345, 9.624314341614987, 7.925501786220276
		};
		static const double expectedEvecs[] = {
			-0.150428640509585, 0.187497426513576, 0.970678082149394,
			0.779981605126846, 0.625802441381904, -0.000004919018357,
			0.607453635908278, -0.757110308615089, 0.240383154173870
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<4, float>(const float*& evals, const float*& evecs)
	{
		static const float expectedEvals[] = {
			37.347740173339844f, 9.624703407287598f, 7.940164566040039f, 1.061712265014648f
		};
		static const float expectedEvecs[] = {
			-0.150269940495491f, 0.187220811843872f, 0.970467865467072f, 0.023652425035834f,
			0.779159665107727f, 0.626788496971130f, -0.000105984276161f, -0.006797631736845f,
			0.608242213726044f, -0.755563497543335f, 0.238818943500519f, 0.046158745884895f,
			-0.019251370802522f, 0.034755907952785f, -0.034024771302938f, 0.998630762100220f,
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}
	template<> void getExpectedEigenvaluesEigenvectorsDataPtr<4, double>(const double*& evals, const double*& evecs)
	{
		static const double expectedEvals[] = {
			37.347738991879226, 9.624706889211053, 7.940170752816341, 1.061708639965897
		};
		static const double expectedEvecs[] = {
			-0.150269954805403, 0.187220917596058, 0.970467838469868, 0.023652551509145,
			0.779159831346545, 0.626788431871120, -0.000105940250315, -0.006797622027466,
			0.608241962267880, -0.755563776664248, 0.238818902950296, 0.046158707986616,
			-0.019251317755512, 0.034755849578017, -0.034024915369495, 0.998630924225204,
		};
		evals = expectedEvals;
		evecs = expectedEvecs;
	}

	template<glm::length_t D, typename T, glm::qualifier Q>
	int checkEigenvaluesEigenvectors(
		glm::vec<D, T, Q> const& evals,
		glm::mat<D, D, T, Q> const& evecs)
	{
		const T* expectedEvals = GLM_NULLPTR;
		const T* expectedEvecs = GLM_NULLPTR;
		getExpectedEigenvaluesEigenvectorsDataPtr<D, T>(expectedEvals, expectedEvecs);

		for(int i = 0; i < D; ++i)
			if(!glm::equal(evals[i], expectedEvals[i], myEpsilon<T>()))
				return failReport(__LINE__);

		for (int i = 0; i < D; ++i)
			for (int d = 0; d < D; ++d)
				if (!glm::equal(evecs[i][d], expectedEvecs[i * D + d], myEpsilon2<T>()))
				{
					fprintf(stderr, "E: %.15lf != %.15lf ; diff: %.20lf\n",
						static_cast<double>(evecs[i][d]),
						static_cast<double>(expectedEvecs[i * D + d]),
						static_cast<double>(evecs[i][d] - expectedEvecs[i * D + d])
					);
					return failReport(__LINE__);
				}

		return 0;
	}

} // namespace _1aga

// Compute center of gravity
template<typename vec>
vec computeCenter(const std::vector<vec>& testData)
{
	double c[4];
	std::fill(c, c + vec::length(), 0.0);

	typename std::vector<vec>::const_iterator e = testData.end();
	for(typename std::vector<vec>::const_iterator i = testData.begin(); i != e; ++i)
		for(glm::length_t d = 0; d < static_cast<glm::length_t>(vec::length()); ++d)
			c[d] += static_cast<double>((*i)[d]);

	vec cVec(0);
	for(glm::length_t d = 0; d < static_cast<glm::length_t>(vec::length()); ++d)
		cVec[d] = static_cast<typename vec::value_type>(c[d] / static_cast<double>(testData.size()));
	return cVec;
}

// Test sorting of Eigenvalue&Eigenvector lists. Use exhaustive search.
template<glm::length_t D, typename T, glm::qualifier Q>
int testEigenvalueSort()
{
	// Test input data: four arbitrary values
	static const glm::vec<D, T, Q> refVal(
		glm::vec<4, T, Q>(
			10, 8, 6, 4
		)
	);
	// Test input data: four arbitrary vectors, which can be matched to the above values
	static const glm::mat<D, D, T, Q> refVec(
		glm::mat<4, 4, T, Q>(
			10, 20, 5, 40,
			8, 16, 4, 32,
			6, 12, 3, 24,
			4, 8, 2, 16
		)
	);
	// Permutations of test input data for exhaustive check, based on `D` (1 <= D <= 4)
	static const int permutationCount[] = {
		0,
		1,
		2,
		6,
		24
	};
	// The permutations t perform, based on `D` (1 <= D <= 4)
	static const glm::ivec4 permutation[] = {
		glm::ivec4(0, 1, 2, 3),
		glm::ivec4(1, 0, 2, 3), // last for D = 2
		glm::ivec4(0, 2, 1, 3),
		glm::ivec4(1, 2, 0, 3),
		glm::ivec4(2, 0, 1, 3),
		glm::ivec4(2, 1, 0, 3), // last for D = 3
		glm::ivec4(0, 1, 3, 2),
		glm::ivec4(1, 0, 3, 2),
		glm::ivec4(0, 2, 3, 1),
		glm::ivec4(1, 2, 3, 0),
		glm::ivec4(2, 0, 3, 1),
		glm::ivec4(2, 1, 3, 0),
		glm::ivec4(0, 3, 1, 2),
		glm::ivec4(1, 3, 0, 2),
		glm::ivec4(0, 3, 2, 1),
		glm::ivec4(1, 3, 2, 0),
		glm::ivec4(2, 3, 0, 1),
		glm::ivec4(2, 3, 1, 0),
		glm::ivec4(3, 0, 1, 2),
		glm::ivec4(3, 1, 0, 2),
		glm::ivec4(3, 0, 2, 1),
		glm::ivec4(3, 1, 2, 0),
		glm::ivec4(3, 2, 0, 1),
		glm::ivec4(3, 2, 1, 0)  // last for D = 4
	};

	// initial sanity check
	if(!vectorEpsilonEqual(refVal, refVal))
		return failReport(__LINE__);
	if(!matrixEpsilonEqual(refVec, refVec))
		return failReport(__LINE__);

	// Exhaustive search through all permutations
	for(int p = 0; p < permutationCount[D]; ++p)
	{
		glm::vec<D, T, Q> testVal;
		glm::mat<D, D, T, Q> testVec;
		for(int i = 0; i < D; ++i)
		{
			testVal[i] = refVal[permutation[p][i]];
			testVec[i] = refVec[permutation[p][i]];
		}

		glm::sortEigenvalues(testVal, testVec);

		if (!vectorEpsilonEqual(testVal, refVal))
			return failReport(__LINE__);
		if (!matrixEpsilonEqual(testVec, refVec))
			return failReport(__LINE__);
	}

	return 0;
}

// Test covariance matrix creation functions
template<glm::length_t D, typename T, glm::qualifier Q>
int testCovar(
#if GLM_HAS_CXX11_STL == 1
	glm::length_t dataSize, unsigned int randomEngineSeed
#else // GLM_HAS_CXX11_STL == 1
	glm::length_t, unsigned int
#endif // GLM_HAS_CXX11_STL == 1
)
{
	typedef glm::vec<D, T, Q> vec;
	typedef glm::mat<D, D, T, Q> mat;

	// #1: test expected result with fixed data set
	std::vector<vec> testData;
	_1aga::fillTestData(testData);

	// compute center of gravity
	vec center = computeCenter(testData);

	mat covarMat = glm::computeCovarianceMatrix(testData.data(), testData.size(), center);
	if(_1aga::checkCovarMat(covarMat))
	{
		fprintf(stderr, "Reconstructed covarMat:\n%s\n", glm::to_string(covarMat).c_str());
		return failReport(__LINE__);
	}

	// #2: test function variant consitency with random data
#if GLM_HAS_CXX11_STL == 1
	std::default_random_engine rndEng(randomEngineSeed);
	std::normal_distribution<T> normalDist;
	testData.resize(dataSize);
	// some common offset of all data
	T offset[D];
	for(glm::length_t d = 0; d < D; ++d)
		offset[d] = normalDist(rndEng);
	// init data
	for(glm::length_t i = 0; i < dataSize; ++i)
		for(glm::length_t d = 0; d < D; ++d)
			testData[i][d] = offset[d] + normalDist(rndEng);
	center = computeCenter(testData);

	std::vector<vec> centeredTestData;
	centeredTestData.reserve(testData.size());
	typename std::vector<vec>::const_iterator e = testData.end();
	for(typename std::vector<vec>::const_iterator i = testData.begin(); i != e; ++i)
		centeredTestData.push_back((*i) - center);

	mat c1 = glm::computeCovarianceMatrix(centeredTestData.data(), centeredTestData.size());
	mat c2 = glm::computeCovarianceMatrix<D, T, Q>(centeredTestData.begin(), centeredTestData.end());
	mat c3 = glm::computeCovarianceMatrix(testData.data(), testData.size(), center);
	mat c4 = glm::computeCovarianceMatrix<D, T, Q>(testData.rbegin(), testData.rend(), center);

	if(!matrixEpsilonEqual(c1, c2))
		return failReport(__LINE__);
	if(!matrixEpsilonEqual(c1, c3))
		return failReport(__LINE__);
	if(!matrixEpsilonEqual(c1, c4))
		return failReport(__LINE__);
#endif // GLM_HAS_CXX11_STL == 1
	return 0;
}

template<glm::length_t D, typename T, glm::qualifier Q>
int testEigenvectors()
{
	typedef glm::vec<D, T, Q> vec;
	typedef glm::mat<D, D, T, Q> mat;

	// test expected result with fixed data set
	std::vector<vec> testData;
	_1aga::fillTestData(testData);
	vec center = computeCenter(testData);
	mat covarMat = glm::computeCovarianceMatrix(testData.data(), testData.size(), center);
	vec eigenvalues;
	mat eigenvectors;
	unsigned int c = glm::findEigenvaluesSymReal(covarMat, eigenvalues, eigenvectors);
	if(c != D)
		return failReport(__LINE__);
	glm::sortEigenvalues(eigenvalues, eigenvectors);

	if(_1aga::checkEigenvaluesEigenvectors(eigenvalues, eigenvectors) != 0)
		return failReport(__LINE__);

	return 0;
}

/// A simple small smoke test:
/// - a uniformly sampled block
/// - reconstruct main axes
/// - check order of eigenvalues equals order of extends of block in direction of main axes
int smokeTest()
{
	using glm::vec3;
	using glm::mat3;
	std::vector<vec3> pts;
	pts.reserve(11 * 15 * 7);

	for(int x = -5; x <= 5; ++x)
		for(int y = -7; y <= 7; ++y)
			for(int z = -3; z <= 3; ++z)
				pts.push_back(vec3(x, y, z));

	mat3 covar = glm::computeCovarianceMatrix(pts.data(), pts.size());
	mat3 eVec;
	vec3 eVal;
	int eCnt = glm::findEigenvaluesSymReal(covar, eVal, eVec);
	if(eCnt != 3)
		return failReport(__LINE__);

	// sort eVec by decending eVal
	if(eVal[0] < eVal[1])
	{
		std::swap(eVal[0], eVal[1]);
		std::swap(eVec[0], eVec[1]);
	}
	if(eVal[0] < eVal[2])
	{
		std::swap(eVal[0], eVal[2]);
		std::swap(eVec[0], eVec[2]);
	}
	if(eVal[1] < eVal[2])
	{
		std::swap(eVal[1], eVal[2]);
		std::swap(eVec[1], eVec[2]);
	}

	if(!vectorEpsilonEqual(glm::abs(eVec[0]), vec3(0, 1, 0)))
		return failReport(__LINE__);
	if(!vectorEpsilonEqual(glm::abs(eVec[1]), vec3(1, 0, 0)))
		return failReport(__LINE__);
	if(!vectorEpsilonEqual(glm::abs(eVec[2]), vec3(0, 0, 1)))
		return failReport(__LINE__);

	return 0;
}

#if GLM_HAS_CXX11_STL == 1
int rndTest(unsigned int randomEngineSeed)
{
	std::default_random_engine rndEng(randomEngineSeed);
	std::normal_distribution<double> normalDist;

	// construct orthonormal system
	glm::dvec3 x(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	double l = glm::length(x);
	while(l < myEpsilon<double>())
		x = glm::dvec3(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	x = glm::normalize(x);
	glm::dvec3 y(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	l = glm::length(y);
	while(l < myEpsilon<double>())
		y = glm::dvec3(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	while(glm::abs(glm::dot(x, y)) < myEpsilon<double>())
	{
		y = glm::dvec3(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
		while(l < myEpsilon<double>())
			y = glm::dvec3(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	}
	y = glm::normalize(y);
	glm::dvec3 z = glm::normalize(glm::cross(x, y));
	y = glm::normalize(glm::cross(z, x));

	//printf("\n");
	//printf("x: %.10lf, %.10lf, %.10lf\n", x.x, x.y, x.z);
	//printf("y: %.10lf, %.10lf, %.10lf\n", y.x, y.y, y.z);
	//printf("z: %.10lf, %.10lf, %.10lf\n", z.x, z.y, z.z);

	// generate input point data
	std::vector<glm::dvec3> ptData;
	static const int patters[] = {
		8, 0, 0,
		4, 1, 2,
		0, 2, 0,
		0, 0, 4
	};
	glm::dvec3 offset(normalDist(rndEng), normalDist(rndEng), normalDist(rndEng));
	for(int p = 0; p < 4; ++p)
		for(int xs = 1; xs >= -1; xs -= 2)
			for(int ys = 1; ys >= -1; ys -= 2)
				for(int zs = 1; zs >= -1; zs -= 2)
					ptData.push_back(
						offset
						+ x * static_cast<double>(patters[p * 3 + 0] * xs)
						+ y * static_cast<double>(patters[p * 3 + 1] * ys)
						+ z * static_cast<double>(patters[p * 3 + 2] * zs));

	// perform PCA:
	glm::dvec3 center = computeCenter(ptData);
	glm::dmat3 covarMat = glm::computeCovarianceMatrix(ptData.data(), ptData.size(), center);
	glm::dvec3 evals;
	glm::dmat3 evecs;
	int evcnt = glm::findEigenvaluesSymReal(covarMat, evals, evecs);
	if(evcnt != 3)
		return failReport(__LINE__);
	glm::sortEigenvalues(evals, evecs);

	//printf("\n");
	//printf("evec0: %.10lf, %.10lf, %.10lf\n", evecs[0].x, evecs[0].y, evecs[0].z);
	//printf("evec2: %.10lf, %.10lf, %.10lf\n", evecs[2].x, evecs[2].y, evecs[2].z);
	//printf("evec1: %.10lf, %.10lf, %.10lf\n", evecs[1].x, evecs[1].y, evecs[1].z);

	if(glm::length(glm::abs(x) - glm::abs(evecs[0])) > myEpsilon<double>())
		return failReport(__LINE__);
	if(glm::length(glm::abs(y) - glm::abs(evecs[2])) > myEpsilon<double>())
		return failReport(__LINE__);
	if(glm::length(glm::abs(z) - glm::abs(evecs[1])) > myEpsilon<double>())
		return failReport(__LINE__);

	return 0;
}
#endif // GLM_HAS_CXX11_STL == 1

int main()
{
	int error(0);

	// A small smoke test to fail early with most problems
	if(smokeTest())
		return failReport(__LINE__);

	// test sorting utility.
	if(testEigenvalueSort<2, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvalueSort<2, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvalueSort<3, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvalueSort<3, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvalueSort<4, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvalueSort<4, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if (error != 0)
		return error;

	// Note: the random engine uses a fixed seed to create consistent and reproducible test data
	// test covariance matrix computation from different data sources
	if(testCovar<2, float, glm::defaultp>(100, 12345) != 0)
		error = failReport(__LINE__);
	if(testCovar<2, double, glm::defaultp>(100, 42) != 0)
		error = failReport(__LINE__);
	if(testCovar<3, float, glm::defaultp>(100, 2021) != 0)
		error = failReport(__LINE__);
	if(testCovar<3, double, glm::defaultp>(100, 815) != 0)
		error = failReport(__LINE__);
	if(testCovar<4, float, glm::defaultp>(100, 3141) != 0)
		error = failReport(__LINE__);
	if(testCovar<4, double, glm::defaultp>(100, 174) != 0)
		error = failReport(__LINE__);
	if (error != 0)
		return error;

	// test PCA eigen vector reconstruction
	if(testEigenvectors<2, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvectors<2, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvectors<3, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvectors<3, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvectors<4, float, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(testEigenvectors<4, double, glm::defaultp>() != 0)
		error = failReport(__LINE__);
	if(error != 0)
		return error;

	// Final tests with randomized data
#if GLM_HAS_CXX11_STL == 1
	if(rndTest(12345) != 0)
		error = failReport(__LINE__);
	if(rndTest(42) != 0)
		error = failReport(__LINE__);
	if (error != 0)
		return error;
#endif // GLM_HAS_CXX11_STL == 1

	return error;
}
