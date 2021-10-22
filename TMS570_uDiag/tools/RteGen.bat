@echo off
REM ********************************************************************************************************************
REM *  Description:    CBD RTE generation for SWC Update and contract phase generation for use with unit testing
REM *  Created By:     Nxtr
REM *  Prerequisites:  The Rte Generator of choice must be located in a Folder named RteGen in the UnitTestEnv project
REM *
REM ********************************************************************************************************************
set SWC=Cd_uDiag

REM * Change file permissions to writable to all update of the file by rtegen

attrib -r "..\src\*.c" >logfile.txt
attrib -r "..\utp\contract\*.h" >logfile.txt


..\..\Autosar3Tools\RteGen\dvrtegen -d "..\autosar\%SWC%.dcf" -m %SWC% -g i -o "..\src"  >logfile.txt
..\..\Autosar3Tools\RteGen\dvrtegen -d "..\autosar\%SWC%.dcf" -m %SWC% -g c -o "..\utp\contract" >logfile.txt
