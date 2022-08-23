## platform 
windows 10 or above

## env
+ [mingw-w64](https://www.mingw-w64.org/)
+ [cmake](https://cmake.org/)

## makefile
```console
cd ./build
cmake .. -G "MinGW Makefiles"
mingw32-make
./HelloWorld.exe
```

```console
mingw32-make clean # 清理 生成 .exe 文件
```
