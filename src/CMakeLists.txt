set(CANDLE_HEADER "${project_SOURCE_DIR}/include/investing/candle.h")

add_library(investing investing/candle.cpp ${CANDLE_HEADER})

target_include_directories(investing PUBLIC ../include)

include(FetchContent)
FetchContent_Declare(fmt_lib GIT_REPOSITORY https://github.com/fmtlib/fmt.git)
FetchContent_MakeAvailable(fmt_lib)
target_link_libraries(investing PUBLIC fmt::fmt) #связываем investing и fmt