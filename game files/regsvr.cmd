@echo off

Set _os_bitness=64
IF %PROCESSOR_ARCHITECTURE% == x86 (
  IF NOT DEFINED PROCESSOR_ARCHITEW6432 Set _os_bitness=32
)

IF %_os_bitness% == 32 (	
	%SYSTEMROOT%\system32\regsvr32.EXE /s %SYSTEMROOT%\system32\ir50_32.dll
	%SYSTEMROOT%\system32\regsvr32.EXE /s "%~dp0\GetAVIInfo.dll"
) ELSE (		
	%SYSTEMROOT%\SysWOW64\regsvr32.EXE /s %SYSTEMROOT%\SysWOW64\ir50_32.dll
	%SYSTEMROOT%\SysWOW64\regsvr32.EXE /s "%~dp0\GetAVIInfo.dll"
)
exit