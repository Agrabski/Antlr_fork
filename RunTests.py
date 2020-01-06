import subprocess
import os;
import shutil
from pathlib import Path

def runProcess(path, input):
	x = subprocess.Popen(path, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
	print(x.communicate(input=input)[0].decode())


def testSLR(binaryPath):
	p=binaryPath + "SimpleLeftRecursionTest.exe"
	runProcess(p, b"1+1")
	runProcess(p,b'1+1+1+1)')

os.system("mvn install -DskipTests")
antlrPath = "RuntimeIntegrationTests/antlr.jar"
shutil.move("tool/target/antlr4-4.7.3-SNAPSHOT-complete.jar", antlrPath)

files = Path("RuntimeIntegrationTests").rglob("*.g4")

for f in files:
	print(f.name)
	subprocess.call(['java', '-jar', antlrPath, "-Dlanguage=Cpp", os.path.abspath(f), "-visitor"])

subprocess.call(['msbuild', "RuntimeIntegrationTests\\RuntimeIntegrationTests.sln","/restore"])
binaryPath = "RuntimeIntegrationTests\\x64\\Debug\\"
testSLR(binaryPath)


