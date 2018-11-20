@Echo off
title Music Beep Compiler
set /a err=0
if /i exist %1.cpp (
	g++.exe -c %1.cpp -o %1.o -Iinclude -lpthreadGC2
	if /i "%errorlevel%"=="9009" (
		set /a err=9009
	)
	if /i "%errorlevel%"=="1" (
		set /a err=1
	)
	g++.exe %1.o -o %1.exe -Lib lib/libpthreadGC2.a
	if /i "%errorlevel%"=="9009" (
		set /a err=9009
	)
	if /i "%errorlevel%"=="1" (
		set /a err=1
	)
	del /f /q %1.o >nul 2>nul
	if /i exist %1_back.cpp (
		g++.exe -c %1_back.cpp -o %1_back.o -Iinclude -lpthreadGC2
		if /i "%errorlevel%"=="9009" (
			set /a err=9009
		)
		if /i "%errorlevel%"=="1" (
			set /a err=1
		)
		g++.exe %1_back.o -o %1_back.exe -Lib lib/libpthreadGC2.a
		if /i "%errorlevel%"=="9009" (
			set /a err=9009
		)
		if /i "%errorlevel%"=="1" (
			set /a err=1
		)
		del /f /q %1_back.o >nul 2>nul
	)
	if /i "%err%"=="0" (
		start %1.exe >nul 2>nul
		if /i exist %1_back.exe (
			start %1_back.exe >nul 2>nul
		)
	)
) else (
	echo Program not found.
	set /a err=2
)
if /i not "%err%"=="0" (
	echo An error occurred.
	echo Press any key to continue.
	pause>nul
)