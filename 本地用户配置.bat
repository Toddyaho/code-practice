@echo off
echo ***********************
echo ����Ҫ�����û�������?��Y/N)
echo ***********************
set /p a=:
cls
if %a%==y goto Z
if %a%==Y goto Z
if %a%==n goto W
if %a%==N goto W
:Z
echo ***********************
echo ��ѡ�����÷���
echo =======================
echo 1.��ѯ�û�
echo 2.��������
echo 3.�����û�
echo 4.ɾ���û�
echo 5.�����������˻�
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
echo ��Ҫ�鿴��ǰ�û���now�����������û�(every��?
set/p b=��ǰ������now����������every:
if %b%==now goto n
if %b%==every goto e
:n
whoami /user
:e
net user
pause
goto end

:change
echo ����������
set /p password=:
net user administrator %password%
echo ����������
pause
goto end

:create
echo �������û���
set /p name=:
echo ����������
set /p password=:
net user %name% %password% /add
echo ��Ϊ%name%���˻��Ѵ������
pause
goto end

:delete
echo ������Ҫɾ�����˻�id
set /p id=:
net user %id% /del
echo �û���Ϊ%id%���˻���ɾ��
pause
goto end

:administer
echo ����ѡ1����ѡ2
set /p cha=:
if %cha%==1 goto s
if %cha%==2 goto q
:s
net user administrator /active:no
echo %cha%������
pause
goto end
:q
net user administrator /active:yes
echo %cha%������
pause
goto end

:W
:end