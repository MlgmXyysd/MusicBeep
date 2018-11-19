@Echo off
if /i exist %1.cpp (
	g++.exe -c %1.cpp -o %1.o -Iinclude -lpthreadGC2
	g++.exe %1.o -o %1.exe -Lib lib/libpthreadGC2.a
	del /f /q %1.o >nul 2>nul
	if /i exist %1_back.cpp (
		g++.exe -c %1_back.cpp -o %1_back.o -Iinclude -lpthreadGC2
		g++.exe %1_back.o -o %1_back.exe -Lib lib/libpthreadGC2.a
		del /f /q %1_back.o >nul 2>nul
	)
	start %1.exe >nul 2>nul
	if /i exist %1_back.exe (
		start %1_back.exe >nul 2>nul
	)
)