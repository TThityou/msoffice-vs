rd /s/q debug
for /f "delims=" %%i in ('dir /s/b/ad debug') 	do (rd /s/q "%%i")
rd /s/q release
for /f "delims=" %%i in ('dir /s/b/ad release') do (rd /s/q "%%i")
rd /s/q ipch
for /f "delims=" %%i in ('dir /s/b/ad ipch') 	do (rd /s/q "%%i")


del /s /q "bin\*.pdb"
del /s /q "bin\*.exp"
del /s /q "bin\*.iobj"
del /s /q "bin\*.ipdb"
del /s /q "bin\*.pdb"
del /s /q "bin\*.ilk"
del /s /q *.sdf

pause