set(HEADERS "include/algorithms/binarySearch.hpp")
set(SOURCES src/binarySearch.cpp)

add_library(algorithms_library ${SOURCES} ${HEADERS})

target_include_directories(algorithms_library PUBLIC include)

target_compile_features(algorithms_library PUBLIC cxx_std_11)
