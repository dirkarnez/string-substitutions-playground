REM run as Administrator
@echo off
cd /d %~dp0
set DOWNLOAD_DIR=%USERPROFILE%\Downloads
set DOWNLOAD_DIR_LINUX=%DOWNLOAD_DIR:\=/%
SET PATH=%DOWNLOAD_DIR%\PortableGit\bin;%DOWNLOAD_DIR%\mingw64-posix;%DOWNLOAD_DIR%\mingw64-posix\bin;%DOWNLOAD_DIR%\cmake-3.22.2-windows-x86_64\bin;%PATH%
cmake.exe -G"MinGW Makefiles" -DBOOST_ROOT="P:/Downloads/cpp-libraries/boost/lib/cmake/Boost-1.78.0" -B./build

cd build
mingw32-make.exe
pause
REM GOTO rebuild_and_startapp
