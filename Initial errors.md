sas@sas-virtual-machine:~/Valgrind_Exercise$ cmake -S ./ -B build/
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/sas/Valgrind_Exercise/build
sas@sas-virtual-machine:~/Valgrind_Exercise$ cmake --build build/ --verbose
/usr/bin/cmake -S/home/sas/Valgrind_Exercise -B/home/sas/Valgrind_Exercise/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/bin/cmake -E cmake_progress_start /home/sas/Valgrind_Exercise/build/CMakeFiles /home/sas/Valgrind_Exercise/build//CMakeFiles/progress.marks
/usr/bin/gmake  -f CMakeFiles/Makefile2 all
gmake[1]: Entering directory '/home/sas/Valgrind_Exercise/build'
/usr/bin/gmake  -f app/CMakeFiles/shell-app.dir/build.make app/CMakeFiles/shell-app.dir/depend
gmake[2]: Entering directory '/home/sas/Valgrind_Exercise/build'
cd /home/sas/Valgrind_Exercise/build && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/sas/Valgrind_Exercise /home/sas/Valgrind_Exercise/app /home/sas/Valgrind_Exercise/build /home/sas/Valgrind_Exercise/build/app /home/sas/Valgrind_Exercise/build/app/CMakeFiles/shell-app.dir/DependInfo.cmake --color=
gmake[2]: Leaving directory '/home/sas/Valgrind_Exercise/build'
/usr/bin/gmake  -f app/CMakeFiles/shell-app.dir/build.make app/CMakeFiles/shell-app.dir/build
gmake[2]: Entering directory '/home/sas/Valgrind_Exercise/build'
[ 33%] Building CXX object app/CMakeFiles/shell-app.dir/AnalogSensor.cpp.o
cd /home/sas/Valgrind_Exercise/build/app && /usr/bin/c++  -I/home/sas/Valgrind_Exercise/include -std=gnu++14 -MD -MT app/CMakeFiles/shell-app.dir/AnalogSensor.cpp.o -MF CMakeFiles/shell-app.dir/AnalogSensor.cpp.o.d -o CMakeFiles/shell-app.dir/AnalogSensor.cpp.o -c /home/sas/Valgrind_Exercise/app/AnalogSensor.cpp
[ 66%] Building CXX object app/CMakeFiles/shell-app.dir/main.cpp.o
cd /home/sas/Valgrind_Exercise/build/app && /usr/bin/c++  -I/home/sas/Valgrind_Exercise/include -std=gnu++14 -MD -MT app/CMakeFiles/shell-app.dir/main.cpp.o -MF CMakeFiles/shell-app.dir/main.cpp.o.d -o CMakeFiles/shell-app.dir/main.cpp.o -c /home/sas/Valgrind_Exercise/app/main.cpp
[100%] Linking CXX executable shell-app
cd /home/sas/Valgrind_Exercise/build/app && /usr/bin/cmake -E cmake_link_script CMakeFiles/shell-app.dir/link.txt --verbose=1
/usr/bin/c++ CMakeFiles/shell-app.dir/AnalogSensor.cpp.o CMakeFiles/shell-app.dir/main.cpp.o -o shell-app 
gmake[2]: Leaving directory '/home/sas/Valgrind_Exercise/build'
[100%] Built target shell-app
gmake[1]: Leaving directory '/home/sas/Valgrind_Exercise/build'
/usr/bin/cmake -E cmake_progress_start /home/sas/Valgrind_Exercise/build/CMakeFiles 0
sas@sas-virtual-machine:~/Valgrind_Exercise$ valgrind --leak-check=yes ./build/app/shell-app -s
==15940== Memcheck, a memory error detector
==15940== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15940== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==15940== Command: ./build/app/shell-app -s
==15940== 
Averaged sensor reading: 10
==15940== Conditional jump or move depends on uninitialised value(s)
==15940==    at 0x109EBC: main (in /home/sas/Valgrind_Exercise/build/app/shell-app)
==15940== 
==15940== 
==15940== HEAP SUMMARY:
==15940==     in use at exit: 44 bytes in 2 blocks
==15940==   total heap usage: 4 allocs, 2 frees, 73,772 bytes allocated
==15940== 
==15940== 44 (24 direct, 20 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==15940==    at 0x4849013: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==15940==    by 0x10931E: AnalogSensor::Read() (in /home/sas/Valgrind_Exercise/build/app/shell-app)
==15940==    by 0x109E9B: main (in /home/sas/Valgrind_Exercise/build/app/shell-app)
==15940== 
==15940== LEAK SUMMARY:
==15940==    definitely lost: 24 bytes in 1 blocks
==15940==    indirectly lost: 20 bytes in 1 blocks
==15940==      possibly lost: 0 bytes in 0 blocks
==15940==    still reachable: 0 bytes in 0 blocks
==15940==         suppressed: 0 bytes in 0 blocks
==15940== 
==15940== Use --track-origins=yes to see where uninitialised values come from
==15940== For lists of detected and suppressed errors, rerun with: -s
==15940== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

