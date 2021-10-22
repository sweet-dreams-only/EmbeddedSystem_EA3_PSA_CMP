setlocal

set ECUCFILE=%1
set TARGETDIR=%2
set SERVICESWCFOLDER=%3

cd ..\artt

REM .\artt.exe -d=%ECUCFILE% -t=..\HystComp\HystComp.verify.tt -i=..\artt\include  -u="http://autosar.org/3.0.2"-o=%TARGETDIR%
REM if %ERRORLEVEL% NEQ 0 goto error

.\artt.exe -d=%ECUCFILE% -t=..\HystComp\Ap_HystComp_Cfg.h.tt -i=..\artt\include  -u="http://autosar.org/3.0.2"  -o=%TARGETDIR%
.\artt.exe -d=%ECUCFILE% -t=..\HystComp\Ap_HystComp_Cfg.arxml.tt				 -i=..\artt\include  -u="http://autosar.org/3.0.2" -o=%SERVICESWCFOLDER%


goto end

:error
ECHO Error: HystComp configuration validation failed

:end

endlocal
