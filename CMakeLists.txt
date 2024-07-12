cmake_minimum_required(VERSION 3.10)

project(Pomodoro VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/inc)

# Add all source files
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(pomodoro ${SOURCES})

# Set include directories for the target
target_include_directories(pomodoro
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# Find and link pthread for threading support
find_package(Threads REQUIRED)
target_link_libraries(pomodoro PRIVATE Threads::Threads)

# If you decide to use SDL2 for audio, you would add something like this:
# find_package(SDL2 REQUIRED)
# target_link_libraries(pomodoro PRIVATE SDL2::SDL2)

# Set output directory
set_target_properties(pomodoro PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Install target
install(TARGETS pomodoro DESTINATION bin)

# Enable testing
enable_testing()

# Add tests (if you have any)
# add_subdirectory(tests)