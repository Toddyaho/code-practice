@ECHO OFF
title Folder srq
if EXIST "HTG Locker" goto UNLOCK
if NOT EXIST srq goto MDLOCKER
:CONFIRM
echo ======================================
echo Are you sure you want to encrypt the srq file ?(y/n)
echo ======================================
set/p "cho=>"
if %cho%==Y goto LOCK
if %cho%==y goto LOCK
if %cho%==N goto END
if %cho%==n goto END
echo Invalid choice.
goto CONFIRM 
:LOCK
ren srq "HTG Locker"
attrib +h +s "HTG Locker"
echo Folder locked
goto End
:UNLOCK
echo please input password lock file
set/p "pass=>"
if NOT %pass%== 880101 goto FAIL
echo Invalid choice
attrib -h -s "HTG Locker"
ren "HTG Locker" srq
echo Folder Unlocked successfully
goto End
:FAIL
echo Invalid password
goto end
:MDLOCKER
md srq
echo srq created successfully
goto End
:End
