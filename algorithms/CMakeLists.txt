set(HEADERS "include/algorithms/binarySearch.hpp")

add_library(algorithms_library ${HEADERS})

target_include_directories(algorithms_library PUBLIC include)

target_compile_features(algorithms_library PUBLIC cxx_std_11)

set_target_properties(algorithms_library PROPERTIES LINKER_LANGUAGE CXX)
