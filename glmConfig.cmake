cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

set(GLM_VERSION 0.9.9)
# Set the old GLM_INCLUDE_DIRS variable for backwards compatibility
set(GLM_INCLUDE_DIRS ${CMAKE_CURRENT_LIST_DIR})

add_library(glm::glm INTERFACE IMPORTED)
set_target_properties(glm::glm PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_LIST_DIR})

mark_as_advanced(glm_DIR)

