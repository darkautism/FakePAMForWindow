# FakePamForWindows

Moke pam for ignore compile error in mingw. Not impilement anything.

## How to build

- Install MSYS 64
- Download real pam header file and place it into MSYS include folder. `C:\msys64\mingw64\include\`
- `make`
- Copy libpam.dll.a into MSYS library dir. `C:\msys64\mingw64\lib\`