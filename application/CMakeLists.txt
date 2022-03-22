add_executable(application main.cpp)

target_compile_features(application PRIVATE cxx_std_17)

target_link_libraries(application PRIVATE algorithms_library)
