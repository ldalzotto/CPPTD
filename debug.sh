dir=$(pwd)
cmake=/usr/bin/cmake
lldb=/usr/bin/lldb
target=$1

cmake --build $dir/build --config Debug --target $target -j 6 --
lldb $dir/build/$target

# /usr/bin/cmake --build /media/loic/SSD/SoftwareProjects/CppTD/build --config Debug --target all -j 6 --