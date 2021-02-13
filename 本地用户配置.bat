@echo off
echo ***********************
echo 您需要进行用户配置吗?（Y/N)
echo ***********************
set /p a=:
cls
if %a%==y goto Z
if %a%==Y goto Z
if %a%==n goto W
if %a%==N goto W
:Z
echo ***********************
echo 请选择配置服务
echo =======================
echo 1.查询用户
echo 2.更改密码
echo 3.创建用户
echo 4.删除用户
echo 5.锁定或启用账户
echo ***********************
set /p a=">"
cls
if %a%==1 goto search
if %a%==2 goto change
if %a%==3 goto create
if %a%==4 goto delete
if %a%==5 goto administer

:search
echo ***********************
echo 需要查看当前用户（now）还是所有用户(every）?
set/p b=当前请输入now所有请输入every:
if %b%==now goto n
if %b%==every goto e
:n
whoami /user
:e
net user
pause
goto end

:change
echo 请输入密码
set /p password=:
net user administrator %password%
echo 密码更改完成
pause
goto end

:create
echo 请输入用户名
set /p name=:
echo 请输入密码
set /p password=:
net user %name% %password% /add
echo 名为%name%的账户已创建完毕
pause
goto end

:delete
echo 请输入要删除的账户id
set /p id=:
net user %id% /del
echo 用户名为%id%的账户已删除
pause
goto end

:administer
echo 锁定选1启用选2
set /p cha=:
if %cha%==1 goto s
if %cha%==2 goto q
:s
net user administrator /active:no
echo %cha%已锁定
pause
goto end
:q
net user administrator /active:yes
echo %cha%已启用
pause
goto end

:W
:end