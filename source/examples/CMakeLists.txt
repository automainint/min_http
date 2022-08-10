include(FetchContent)
FetchContent_Declare(
  wolfssl
  GIT_REPOSITORY https://github.com/wolfSSL/wolfssl.git
  GIT_TAG "master"
  GIT_SHALLOW ON)
set(WOLFSSL_OPENSSLEXTRA yes CACHE STRING "" FORCE)
set(WOLFSSL_OPENSSLALL yes CACHE STRING "" FORCE)
set(WOLFSSL_OPENSSLCOEXIST no CACHE STRING "" FORCE)
set(WOLFSSL_EXAMPLES no CACHE STRING "" FORCE)
set(WOLFSSL_CRYPT_TESTS no CACHE STRING "" FORCE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(wolfssl)

add_executable(min_fetch)
target_sources(min_fetch PRIVATE min_fetch.c)
target_link_libraries(min_fetch PUBLIC ${MIN_HTTP_LIBRARY} wolfssl)
