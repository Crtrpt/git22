cd libgit2\build
rm -rf *
cmake -G"Visual Studio 16 2019" -D"BUILD_SHARED_LIBS=OFF USE_WINHTTP=OFF"  -a"x64" ..
cmake --build .
cd ../../