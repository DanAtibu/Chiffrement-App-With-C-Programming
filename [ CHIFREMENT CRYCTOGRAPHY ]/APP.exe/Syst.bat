@echo off
echo					BIENVENU CHEZ COOPERATIVE DAN>S.s1
:a
set /a d=%random%%%52
if %d% equ 0 goto a
if %d% lss 10 goto a
echo %d%>Random.code
cls