set(HEADERS "include/algorithms/binarySearch.hpp"
            "include/algorithms/sortAlgorithms.hpp"
            "include/algorithms/mathFunctions.hpp")

add_library(algorithms_library ${HEADERS})

target_include_directories(algorithms_library PUBLIC include)

target_compile_features(algorithms_library PUBLIC cxx_std_20)

set_target_properties(algorithms_library PROPERTIES LINKER_LANGUAGE CXX)
