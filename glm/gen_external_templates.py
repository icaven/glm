
__author__="eloraiby"
__date__ ="$5-Sep-2010 9:35:29 PM$"

atomic_types = ["unsigned char", "unsigned short", "unsigned int",
         "signed char", "signed short", "signed int",
         "float", "double"]


glsl_vector_types = ["tvec2", "tvec3", "tvec4"]
glsl_matrix_types = ["tmat2x2", "tmat2x3", "tmat2x4",
                "tmat3x2", "tmat3x3", "tmat3x4",
                "tmat4x2", "tmat4x3", "tmat4x4"]

glsl_operators = []

def gen_vectors():
    for v in glsl_vector_types:
        print
        print "//"
        print "// " + v + " type explicit instantiation"
        print "//"
        for a in atomic_types:
            print "template struct " + v + "<" + a + ">;"
        print

def gen_matrices():
    for m in glsl_matrix_types:
        print
        print "//"
        print "// " + m + " type explicit instantiation"
        print "//"
        for a in atomic_types:
            print "template struct " + m + "<" + a + ">;"
        print

if __name__ == "__main__":
    print "//"
    print "// GLM External templates generator script version 0.1 for GLM core"
    print "//"
    print "// atomic types:", atomic_types
    print "// GLSL vector types:", glsl_vector_types;
    print "// GLSL matrix types:", glsl_matrix_types;
    print "//"
    print
    print "#include \"glm.hpp\""
    print
    print "namespace glm {"
    print "namespace detail {"
    

    gen_vectors()
    gen_matrices()

    print "} // namespace detail"
    print "} // namespace glm"
    
    

