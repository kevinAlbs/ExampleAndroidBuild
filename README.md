Build and install libmongoc and libbson with Android NDK:

```
$ cd /path/to/mongo-c-driver
$ mkdir cmake-build && cd cmake-build
$ cmake -DCMAKE_SYSTEM_NAME=Android \
    -DCMAKE_TOOLCHAIN_FILE=~/bin/android-ndk-r20b/build/cmake/android.toolchain.cmake \
    -DANDROID_PLATFORM=android-28 \
    -DENABLE_SHM_COUNTERS=OFF \
    -DENABLE_SRV=OFF \
    -DENABLE_ZSTD=OFF \
    -DCMAKE_INSTALL_PREFIX=/Users/kevinalbertson/bin/android-ndk-r20b/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/mongo-c-driver
    ..
$ make
$ make install
```

Then build the example app using the installed libbson.
```
$ mkdir cmake-build && cd cmake-build
$ cmake  -DCMAKE_SYSTEM_NAME=Android  -DCMAKE_TOOLCHAIN_FILE=~/bin/android-ndk-r20b/build/cmake/android.toolchain.cmake -DANDROID_PLATFORM=android-28 -DCMAKE_PREFIX_PATH=/mongo-c-driver ../
$ make install
```