@echo off
REM ********************************************************************************************************************
REM *  Description:    CBD RTE generation for SWC Update and contract phase generation for use with unit testing
REM *  Created By:     Nxtr
REM *  Prerequisites:  The Rte Generator of choice must be located in a Folder named RteGen in the UnitTestEnv subproject
REM *                  located at the same folder level of the SWC project folder
REM *
REM ********************************************************************************************************************
 REM ** Cahnge file permissions to writable to all update of the file by rtegen

attrib -r "..\src\*.c" >logfile.txt
attrib -r "..\utp\contract\*.h" >logfile.txt

 set dcf=Ap_MtrTempEst


set SWC=Ap_MtrTempEst


..\..\UnitTestEnv\RteGen\dvrtegen -d "..\autosar\%dcf%.dcf" -m %SWC% -g i -o "..\src" >logfile.txt
..\..\UnitTestEnv\RteGen\dvrtegen -d "..\autosar\%dcf%.dcf" -m %SWC% -g c -o "..\utp\contract\Ap_MtrTempEst" >logfile.txt