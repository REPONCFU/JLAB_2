[33mcommit 23e7dd7db1f303d6b7ac36168f12a93d2320803f[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m)[m
Author: REPONCFU <stavbortsov@mail.ru>
Date:   Sat Dec 7 19:17:14 2024 +0300

    Начало положено

[1mdiff --git a/.idea/.gitignore b/.idea/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..26d3352[m
[1m--- /dev/null[m
[1m+++ b/.idea/.gitignore[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32m# Default ignored files[m
[32m+[m[32m/shelf/[m
[32m+[m[32m/workspace.xml[m
[1mdiff --git a/.idea/.name b/.idea/.name[m
[1mnew file mode 100644[m
[1mindex 0000000..42061c0[m
[1m--- /dev/null[m
[1m+++ b/.idea/.name[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mREADME.md[m
\ No newline at end of file[m
[1mdiff --git a/.idea/JLAB_2.iml b/.idea/JLAB_2.iml[m
[1mnew file mode 100644[m
[1mindex 0000000..d8b3f6c[m
[1m--- /dev/null[m
[1m+++ b/.idea/JLAB_2.iml[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<module type="PYTHON_MODULE" version="4">[m
[32m+[m[32m  <component name="NewModuleRootManager">[m
[32m+[m[32m    <content url="file://$MODULE_DIR$" />[m
[32m+[m[32m    <orderEntry type="jdk" jdkName="Python 3.13" jdkType="Python SDK" />[m
[32m+[m[32m    <orderEntry type="sourceFolder" forTests="false" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</module>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/inspectionProfiles/profiles_settings.xml b/.idea/inspectionProfiles/profiles_settings.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..105ce2d[m
[1m--- /dev/null[m
[1m+++ b/.idea/inspectionProfiles/profiles_settings.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<component name="InspectionProjectProfileManager">[m
[32m+[m[32m  <settings>[m
[32m+[m[32m    <option name="USE_PROJECT_PROFILE" value="false" />[m
[32m+[m[32m    <version value="1.0" />[m
[32m+[m[32m  </settings>[m
[32m+[m[32m</component>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/misc.xml b/.idea/misc.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..1d3ce46[m
[1m--- /dev/null[m
[1m+++ b/.idea/misc.xml[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="Black">[m
[32m+[m[32m    <option name="sdkName" value="Python 3.13" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m  <component name="ProjectRootManager" version="2" project-jdk-name="Python 3.13" project-jdk-type="Python SDK" />[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/modules.xml b/.idea/modules.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..cd8c097[m
[1m--- /dev/null[m
[1m+++ b/.idea/modules.xml[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="ProjectModuleManager">[m
[32m+[m[32m    <modules>[m
[32m+[m[32m      <module fileurl="file://$PROJECT_DIR$/.idea/JLAB_2.iml" filepath="$PROJECT_DIR$/.idea/JLAB_2.iml" />[m
[32m+[m[32m    </modules>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/vcs.xml b/.idea/vcs.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..35eb1dd[m
[1m--- /dev/null[m
[1m+++ b/.idea/vcs.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="VcsDirectoryMappings">[m
[32m+[m[32m    <mapping directory="" vcs="Git" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/README.md b/README.md[m
[1mindex c251146..8d86beb 100644[m
[1m--- a/README.md[m
[1m+++ b/README.md[m
[36m@@ -1 +1,7 @@[m
[31m-# JLAB_2[m
\ No newline at end of file[m
[32m+[m[32m# JLAB_2[m
[32m+[m[32m## Cross platform developmemt[m[41m [m
[32m+[m
[32m+[m[32m## Информация[m
[32m+[m
[32m+[m[32m- **Группа:** `ИТС-Б-О-23-1`[m
[32m+[m[32m- **ФИО:** `Борцов Богдан Михайлович`[m
\ No newline at end of file[m
[1mdiff --git a/main.py b/main.py[m
[1mnew file mode 100644[m
[1mindex 0000000..7604cac[m
[1m--- /dev/null[m
[1m+++ b/main.py[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mimport hashlib[m
[32m+[m
[32m+[m[32mdef hash_message(message):[m
[32m+[m[32m    """[m
[32m+[m[32m    Хеширование сообщения с использованием SHA-256.[m
[32m+[m[32m    """[m
[32m+[m[32m    sha256_hash = hashlib.sha256(message.encode()).hexdigest()[m
[32m+[m[32m    print(f"SHA-256 хэш: {sha256_hash}")[m
[32m+[m
[32m+[m[32mif __name__ == "__main__":[m
[32m+[m[32m    message = "Hello, Cryptography!"[m
[32m+[m[32m    hash_message(message)[m

[33mcommit 6eb013811a5955fd2cf2d3917bd3164fafebcf77[m[33m ([m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m)[m
Author: REPONCFU <stavbortsov@mail.ru>
Date:   Sat Dec 7 12:20:59 2024 +0300

    Initial commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..82f9275[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,162 @@[m
[32m+[m[32m# Byte-compiled / optimized / DLL files[m
[32m+[m[32m__pycache__/[m
[32m+[m[32m*.py[cod][m
[32m+[m[32m*$py.class[m
[32m+[m
[32m+[m[32m# C extensions[m
[32m+[m[32m*.so[m
[32m+[m
[32m+[m[32m# Distribution / packaging[m
[32m+[m[32m.Python[m
[32m+[m[32mbuild/[m
[32m+[m[32mdevelop-eggs/[m
[32m+[m[32mdist/[m
[32m+[m[32mdownloads/[m
[32m+[m[32meggs/[m
[32m+[m[32m.eggs/[m
[32m+[m[32mlib/[m
[32m+[m[32mlib64/[m
[32m+[m[32mparts/[m
[32m+[m[32msdist/[m
[32m+[m[32mvar/[m
[32m+[m[32mwheels/[m
[32m+[m[32mshare/python-wheels/[m
[32m+[m[32m*.egg-info/[m
[32m+[m[32m.installed.cfg[m
[32m+[m[32m*.egg[m
[32m+[m[32mMANIFEST[m
[32m+[m
[32m+[m[32m# PyInstaller[m
[32m+[m[32m#  Usually these files are written by a python script from a template[m
[32m+[m[32m#  before PyInstaller builds the exe, so as to inject date/other infos into it.[m
[32m+[m[32m*.manifest[m
[32m+[m[32m*.spec[m
[32m+[m
[32m+[m[32m# Installer logs[m
[32m+[m[32mpip-log.txt[m
[32m+[m[32mpip-delete-this-directory.txt[m
[32m+[m
[32m+[m[32m# Unit test / coverage reports[m
[32m+[m[32mhtmlcov/[m
[32m+[m[32m.tox/[m
[32m+[m[32m.nox/[m
[32m+[m[32m.coverage[m
[32m+[m[32m.coverage.*[m
[32m+[m[32m.cache[m
[32m+[m[32mnosetests.xml[m
[32m+[m[32mcoverage.xml[m
[32m+[m[32m*.cover[m
[32m+[m[32m*.py,cover[m
[32m+[m[32m.hypothesis/[m
[32m+[m[32m.pytest_cache/[m
[32m+[m[32mcover/[m
[32m+[m
[32m+[m[32m# Translations[m
[32m+[m[32m*.mo[m
[32m+[m[32m*.pot[m
[32m+[m
[32m+[m[32m# Django stuff:[m
[32m+[m[32m*.log[m
[32m+[m[32mlocal_settings.py[m
[32m+[m[32mdb.sqlite3[m
[32m+[m[32mdb.sqlite3-journal[m
[32m+[m
[32m+[m[32m# Flask stuff:[m
[32m+[m[32minstance/[m
[32m+[m[32m.webassets-cache[m
[32m+[m
[32m+[m[32m# Scrapy stuff:[m
[32m+[m[32m.scrapy[m
[32m+[m
[32m+[m[32m# Sphinx documentation[m
[32m+[m[32mdocs/_build/[m
[32m+[m
[32m+[m[32m# PyBuilder[m
[32m+[m[32m.pybuilder/[m
[32m+[m[32mtarget/[m
[32m+[m
[32m+[m[32m# Jupyter Notebook[m
[32m+[m[32m.ipynb_checkpoints[m
[32m+[m
[32m+[m[32m# IPython[m
[32m+[m[32mprofile_default/[m
[32m+[m[32mipython_config.py[m
[32m+[m
[32m+[m[32m# pyenv[m
[32m+[m[32m#   For a library or package, you might want to ignore these files since the code is[m
[32m+[m[32m#   intended to run in multiple environments; otherwise, check them in:[m
[32m+[m[32m# .python-version[m
[32m+[m
[32m+[m[32m# pipenv[m
[32m+[m[32m#   According to pypa/pipenv#598, it is recommended to include Pipfile.lock in version control.[m
[32m+[m[32m#   However, in case of collaboration, if having platform-specific dependencies or dependencies[m
[32m+[m[32m#   having no cross-platform support, pipenv may install dependencies that don't work, or not[m
[32m+[m[32m#   install all needed dependencies.[m
[32m+[m[32m#Pipfile.lock[m
[32m+[m
[32m+[m[32m# poetry[m
[32m+[m[32m#   Similar to Pipfile.lock, it is generally recommended to include poetry.lock in version control.[m
[32m+[m[32m#   This is especially recommended for binary packages to ensure reproducibility, and is more[m
[32m+[m[32m#   commonly ignored for libraries.[m
[32m+[m[32m#   https://python-poetry.org/docs/basic-usage/#commit-your-poetrylock-file-to-version-control[m
[32m+[m[32m#poetry.lock[m
[32m+[m
[32m+[m[32m# pdm[m
[32m+[m[32m#   Similar to Pipfile.lock, it is generally recommended to include pdm.lock in version control.[m
[32m+[m[32m#pdm.lock[m
[32m+[m[32m#   pdm stores project-wide configurations in .pdm.toml, but it is recommended to not include it[m
[32m+[m[32m#   in version control.[m
[32m+[m[32m#   https://pdm.fming.dev/latest/usage/project/#working-with-version-control[m
[32m+[m[32m.pdm.toml[m
[32m+[m[32m.pdm-python[m
[32m+[m[32m.pdm-build/[m
[32m+[m
[32m+[m[32m# PEP 582; used by e.g. github.com/David-OConnor/pyflow and github.com/pdm-project/pdm[m
[32m+[m[32m__pypackages__/[m
[32m+[m
[32m+[m[32m# Celery stuff[m
[32m+[m[32mcelerybeat-schedule[m
[32m+[m[32mcelerybeat.pid[m
[32m+[m
[32m+[m[32m# SageMath parsed files[m
[32m+[m[32m*.sage.py[m
[32m+[m
[32m+[m[32m# Environments[m
[32m+[m[32m.env[m
[32m+[m[32m.venv[m
[32m+[m[32menv/[m
[32m+[m[32mvenv/[m
[32m+[m[32mENV/[m
[32m+[m[32menv.bak/[m
[32m+[m[32mvenv.bak/[m
[32m+[m
[32m+[m[32m# Spyder project settings[m
[32m+[m[32m.spyderproject[m
[32m+[m[32m.spyproject[m
[32m+[m
[32m+[m[32m# Rope project settings[m
[32m+[m[32m.ropeproject[m
[32m+[m
[32m+[m[32m# mkdocs documentation[m
[32m+[m[32m/site[m
[32m+[m
[32m+[m[32m# mypy[m
[32m+[m[32m.mypy_cache/[m
[32m+[m[32m.dmypy.json[m
[32m+[m[32mdmypy.json[m
[32m+[m
[32m+[m[32m# Pyre type checker[m
[32m+[m[32m.pyre/[m
[32m+[m
[32m+[m[32m# pytype static type analyzer[m
[32m+[m[32m.pytype/[m
[32m+[m
[32m+[m[32m# Cython debug symbols[m
[32m+[m[32mcython_debug/[m
[32m+[m
[32m+[m[32m# PyCharm[m
[32m+[m[32m#  JetBrains specific template is maintained in a separate JetBrains.gitignore that can[m
[32m+[m[32m#  be found at https://github.com/github/gitignore/blob/main/Global/JetBrains.gitignore[m
[32m+[m[32m#  and can be added to the global gitignore or merged into this file.  For a more nuclear[m
[32m+[m[32m#  option (not recommended) you can uncomment the following to ignore the entire idea folder.[m
[32m+[m[32m#.idea/[m
[1mdiff --git a/LICENSE b/LICENSE[m
[1mnew file mode 100644[m
[1mindex 0000000..fc7758d[m
[1m--- /dev/null[m
[1m+++ b/LICENSE[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m[32mMIT License[m
[32m+[m
[32m+[m[32mCopyright (c) 2024 REPONCFU[m
[32m+[m
[32m+[m[32mPermission is hereby granted, free of charge, to any person obtaining a copy[m
[32m+[m[32mof this software and associated documentation files (the "Software"), to deal[m
[32m+[m[32min the Software without restriction, including without limitation the rights[m
[32m+[m[32mto use, copy, modify, merge, publish, distribute, sublicense, and/or sell[m
[32m+[m[32mcopies of the Software, and to permit persons to whom the Software is[m
[32m+[m[32mfurnished to do so, subject to the following conditions:[m
[32m+[m
[32m+[m[32mThe above copyright notice and this permission notice shall be included in all[m
[32m+[m[32mcopies or substantial portions of the Software.[m
[32m+[m
[32m+[m[32mTHE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR[m
[32m+[m[32mIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,[m
[32m+[m[32mFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE[m
[32m+[m[32mAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER[m
[32m+[m[32mLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,[m
[32m+[m[32mOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE[m
[32m+[m[32mSOFTWARE.[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..c251146[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m# JLAB_2[m
\ No newline at end of file[m
